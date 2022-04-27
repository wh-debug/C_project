#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
using namespace cv;
 
int main( )
{
	Mat srcImage, dstImage;
	Mat srcHist, dstHist;  
	srcImage = imread( "/home/wh/C_lanauge/src/opencv/1.png", 0 );

	if(!srcImage.data ){
        printf("读取图片错误"); return false; 
    } 

	imshow( "原始图", srcImage );
	//进行直方图均衡化
	equalizeHist( srcImage, dstImage );
	//显示结果
	imshow( "直方图均衡化", dstImage );
 
	//计算图像的直方图  
	//定义变量         
	int dims = 1;  
	float hranges[] = {0, 255};  
	const float *ranges[] = {hranges};   // 这里需要为const类型  
	int size = 256;  
	int channels = 0;  
	calcHist(&srcImage, 1, &channels, Mat(), srcHist, dims, &size, ranges); 
	calcHist(&dstImage, 1, &channels, Mat(), dstHist, dims, &size, ranges); 
 
	Mat srcHistImage(size, size, CV_8U, Scalar(0));  
	Mat dstHistImage(size, size, CV_8U, Scalar(0));  
	//获取最大值和最小值  
	double minValue = 0;  
	double srcMaxValue = 0;  
	double dstMaxValue = 0; 
	minMaxLoc(srcHist,&minValue, &srcMaxValue, 0, 0); 
	minMaxLoc(dstHist,&minValue, &dstMaxValue, 0, 0);
	//绘制出直方图  
	//saturate_cast函数的作用即是：当运算完之后，结果为负，则转为0，结果超出255，则为255。  
	int hpt = saturate_cast<int>(0.9 * size);  
	for(int i = 0; i < 256; i++)  
	{  
		float srcValue = srcHist.at<float>(i);           //   注意hist中是float类型 
		float dstValue = dstHist.at<float>(i); 
		//拉伸到0-max  
		int srcRealValue = saturate_cast<int>(srcValue * hpt/srcMaxValue);
		int dstRealValue = saturate_cast<int>(dstValue * hpt/dstMaxValue);
 
		line(srcHistImage,Point(i, size - 1),Point(i, size - srcRealValue),Scalar(255));
		line(dstHistImage,Point(i, size - 1),Point(i, size - dstRealValue),Scalar(255));
	}  
	imshow("原图直方图", srcHistImage); 
	imshow("均衡后直方图", dstHistImage);
 
	waitKey(0);
	return 0;
 
}