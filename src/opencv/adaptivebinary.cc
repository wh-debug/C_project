#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

/**
 * adaptiveThreshold的使用
*/

int main(){
    // 读取图像
    Mat src = imread("/home/wh/Pictures/Konachan.jpg");
    if (! src.data){
        cout << "could not load image." << endl;
        return -1;
    }
    namedWindow("src", WINDOW_AUTOSIZE);
    imshow("src", src);

    // 转成灰度图
    Mat srcGray;
    cvtColor(src, srcGray, COLOR_BGR2GRAY);
    namedWindow("srcGray", WINDOW_AUTOSIZE);
    imshow("srcGray", srcGray);

    // 自适应阈值二值化
    Mat srcBinary;
    adaptiveThreshold(~srcGray, srcBinary, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 11, -2);
    namedWindow("srcBinary", WINDOW_AUTOSIZE);
    imshow("srcBinary", srcBinary);

    waitKey(0);
    return 0;
}
