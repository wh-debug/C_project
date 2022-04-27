#include "iostream"
#include "cmath"
#include "vector"
#include "opencv2/opencv.hpp"

using namespace std;

std::vector<int> umax; // 存放计算描述子的3 x 3周围16个像素的坐标
std::vector<int> mnFeaturesPerLevel;
const int HALF_PATCH_SIZE = 15;
const int nfeatures = 1000;
const float scaleFactor = 1.2f;
const float factor = 1.0f / scaleFactor;
const int nlevels = 8;


int main(int argc, char** argv)
{

    umax.resize(HALF_PATCH_SIZE + 1);
    mnFeaturesPerLevel.resize(nlevels);

    int v, v0, vmax = cvFloor(HALF_PATCH_SIZE * sqrt(2.f) / 2 + 1);
    int vmin = cvCeil(HALF_PATCH_SIZE * sqrt(2.f) / 2);

    cout << vmin << " " << vmax << endl;

    const double hp2 = HALF_PATCH_SIZE*HALF_PATCH_SIZE; // 以特征点为中心的半径为HALF_PATCH_SIZE的区域

    for (v = 0; v <= vmax; ++v)
        umax[v] = cvRound(sqrt(hp2 - v * v));

    // Make sure we are symmetric(对称)
    for (v = HALF_PATCH_SIZE, v0 = 0; v >= vmin; --v)
    {
        while (umax[v0] == umax[v0 + 1])
            ++v0;
        umax[v] = v0;
        ++v0;
    }

    for ( int i = 0; i < HALF_PATCH_SIZE + 1; ++i){
        cout << i << "  ";
        cout << umax.at(i) << endl;
    }

    float nDesiredFeaturesPerScale = nfeatures*(1 - factor)/(1 - (float)pow((double)factor, (double)nlevels));
    int sumFeatures = 0;
    for( int level = 0; level < nlevels-1; level++ )
    {
        mnFeaturesPerLevel[level] = cvRound(nDesiredFeaturesPerScale);
        sumFeatures += mnFeaturesPerLevel[level];
        nDesiredFeaturesPerScale *= factor;
    }

    cout << endl << cvRound(nDesiredFeaturesPerScale) << endl;
    cout << sumFeatures << endl;
    cout << (float)pow((double)factor, (double)nlevels) << endl;
    return 0;
}