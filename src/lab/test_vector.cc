#include "cmath"
#include "vector"
#include "iostream"
#include <opencv2/core/types.hpp>
#include "opencv4/opencv2/imgproc.hpp"
#include "opencv4/opencv2/highgui.hpp"
#include "opencv4/opencv2/imgcodecs.hpp"

std::vector<cv::Mat> Image;
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    Mat img1 = imread("/home/wh/C_lanauge/src/opencv/1.png"); //xxxx为图片路径，绝对路径

    Image.push_back(img1);

    imshow("image", Image[0]);
    
    waitKey(0);
    return 0;
}



