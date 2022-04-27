#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdio_ext.h>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{

    Mat frame;
    char string[10];
    clock_t start, end;
    double fps;
    //--- INITIALIZE VIDEOCAPTURE
    VideoCapture cap;
    int deviceID = 0;             // 0 = open default camera
    int apiID = cv::CAP_ANY;      // 0 = autodetect default API
    // open selected camera using selected API
    cap.open(deviceID, apiID);
    // check if we succeeded
    if (!cap.isOpened()) {
        cerr << "ERROR! Unable to open camera\n";
        return -1;
    }
    //--- GRAB AND WRITE LOOP
    cout << "Start grabbing" << endl << "Press any key to terminate" << endl;
    for (;;)
    {
        start = clock();
        // wait for a new frame from camera and store it into 'frame'
        cap.read(frame);
        // check if we succeeded
        if (frame.empty()) {
            cerr << "ERROR! blank frame grabbed\n";
            break;
        }
        double endTime = (double)(end - start) / CLOCKS_PER_SEC;
        fps = 1 / endTime;
        cout << fps << endl;
        sprintf(string, "%.2f", fps);      // 帧率保留两位小数
        std::string fpsString("FPS:");
        fpsString += string;                    // 在"FPS:"后加入帧率数值字符串

        putText(frame, fpsString, cv::Point(50, 100), cv::FONT_HERSHEY_SIMPLEX, 1.5, cv::Scalar(0, 0, 0), 10);
        imshow("Live", frame);
        end = clock();
        waitKey(1);
    }
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}

