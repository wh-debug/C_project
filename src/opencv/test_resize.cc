#include "iostream"
#include "opencv2/opencv.hpp"
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;



int main(int argc, char** argv)
{

    Mat img1 = imread("/home/wh/C_lanauge/src/opencv/1.png"); //xxxx为图片路径，绝对路径

    Mat outImage;

    resize(img1, outImage, Size( img1.cols(), img1.rows()), 0, 0);


    return 0;
}

