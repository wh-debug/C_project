#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
  Mat img1, img2;
  img1 = imread("/home/wh/C_lanauge/src/opencv/1.png"); //xxxx为图片路径，绝对路径
  img2 = imread("/home/wh/C_lanauge/src/opencv/2.png");

  Mat image = Mat::zeros(Size(img1.cols * 2 + 10, img1.rows), img1.type());
  Rect roi(0, 0, img1.cols, img1.rows);
  img1.copyTo(image(roi));
  roi.x = img1.cols + 10;
  img2.copyTo(image(roi));


  imshow("test", image);
  waitKey(0);
  return 0;
}
