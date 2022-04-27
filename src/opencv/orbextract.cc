#include <chrono>
#include <iostream>
#include <opencv4/opencv2/core/core.hpp>
#include <opencv4/opencv2/highgui/highgui.hpp>
#include <opencv4/opencv2/features2d/features2d.hpp>
#include <opencv4/opencv2/imgcodecs/legacy/constants_c.h>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    // if( argc != 3){
    //     cout << "usage: feature_extraction image1 image2" << endl;
    //     return 1;
    // }
    // 读取图像
    Mat image_1 = imread("/home/wh/C_lanauge/src/opencv/1.png", CV_LOAD_IMAGE_COLOR);
    Mat image_2 = imread("/home/wh/C_lanauge/src/opencv/2.png", CV_LOAD_IMAGE_COLOR);
    assert(image_1.data != nullptr && image_2.data != nullptr);

    // 初始化
    std::vector<KeyPoint> keypoints_1, keypoints_2;
    Mat descriptors_1, descriptors_2;
    Ptr<FeatureDetector> detector = ORB::create();
    Ptr<DescriptorExtractor> descriptor = ORB::create();
    Ptr<DescriptorMatcher> matcher = DescriptorMatcher::create("BruteForce-Hamming");

    // 第一步检测Oriented FAST角点检测
    chrono::steady_clock::time_point t1 = chrono::steady_clock::now();
    detector->detect(image_1, keypoints_1);
    detector->detect(image_2, keypoints_2);

    // 第二步，根据角点位置计算描述子
    descriptor->compute(image_1, keypoints_1, descriptors_1);
    descriptor->compute(image_2, keypoints_2, descriptors_2);
    chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
    chrono::duration<double> time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
    cout << "extract ORB cost = " << time_used.count() << " seconds. " << endl;

    Mat outimage1;
    drawKeypoints(image_1, keypoints_1, outimage1, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
    imshow("ORB features", outimage1);


    // 第三部：　对两幅图中的描述子进行匹配，使用汉明距离
    vector<DMatch> matches;
    t1 = chrono::steady_clock::now();
    matcher->match(descriptors_1, descriptors_2, matches);
    t2 = chrono::steady_clock::now();
    time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
    cout << "match ORB cost = " << time_used.count() << " seconds. " << endl;


    // 第四步，　匹配点对筛选，计算最小距离和最大距离
    auto min_max = minmax_element(matches.begin(), matches.end(), [](const DMatch &m1, const DMatch &m2){
        return m1.distance < m2.distance;
    });
    double min_dist = min_max .first->distance;
    double max_dist = min_max.second->distance;

    printf("-- Max dist : %f \n", max_dist);
    printf("-- min dist : %f \n", min_dist);

    // 当描述子之间的距离大于两倍的最小距离时，　即认为匹配失误，
    std::vector<DMatch> good_matches;
    for(int i = 0; i < descriptors_1.rows; i++){
        if (matches[i].distance <= max(2 * min_dist, 30.0)){
            good_matches.push_back(matches[i]);
        }
    }

    // 绘制匹配结果

    Mat image_match;
    Mat image_goodmatch;
    drawMatches(image_1, keypoints_1, image_2, keypoints_2, matches, image_match);
    drawMatches(image_1, keypoints_1, image_2, keypoints_2, good_matches, image_goodmatch);
    imshow("all matches", image_match);
    imshow("good matches", image_goodmatch);
    waitKey(0);

    return 0;
}




