#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
  Mat img = imread("/home/wh/Pictures/Wallpapers/28.jpg"); //xxxx为图片路径，绝对路径
  imshow("test", img);
  waitKey(0);
  return 0;
}