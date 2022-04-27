#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main(int argc, char** argv)
{
    cv::Mat frame;
    // 可从摄像头输入视频流或直接播放视频文件
    //cv::VideoCapture capture(0);
    cv::VideoCapture capture(0);
    double fps;
    char string[10];  // 用于存放帧率的字符串
    cv::namedWindow("Camera FPS");
    double t = 0;

    while (1)
    {
        t = (double)cv::getTickCount();
        if (cv::waitKey(50) == 30){ break; }
        if (capture.isOpened())
        {
            capture >> frame;
            // getTickcount函数：返回从操作系统启动到当前所经过的毫秒数
            // getTickFrequency函数：返回每秒的计时周期数
            // // t为该处代码执行所耗的时间,单位为秒,fps为其倒数
            // t = ((double)cv::getTickCount() - t) / cv::getTickFrequency();
            // fps = 1.0 / t;

            // sprintf(string, "%.2f", fps);      // 帧率保留两位小数
            // std::string fpsString("FPS:");
            // fpsString += string;                    // 在"FPS:"后加入帧率数值字符串
            // 将帧率信息写在输出帧上
            // cv::putText(frame, fpsString, cv::Point(5, 20), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 0));           // 字体颜色

            cv::imshow("Camera FPS", frame);
            waitKey(0);
        }
        else
        {
            std::cout << "No Camera Input!" << std::endl;
            break;
        }
    }
}
