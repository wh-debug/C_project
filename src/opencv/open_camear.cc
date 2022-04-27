#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// OpenCV includes
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

int main(int argc, const char** argv)
{
	// 1.创建视频采集对象;
	VideoCapture cap;	

	// 2.打开默认相机;
	cap.open(0);

	// 3.判断相机是否打开成功;
	if (!cap.isOpened())
		return -1;

	// 4.显示窗口命名;
	namedWindow("Video", 1);
	for (;;)
	{
		// 获取新的一帧;
		Mat frame;
		cap >> frame; 
		if (frame.empty())
			return 0;

		// 显示新的帧;
		imshow("Video", frame);
		
		// 按键退出显示;
		if (waitKey(30) >= 0) break;
	}

	// 5.释放视频采集对象;
	cap.release();

	return 0;
}

