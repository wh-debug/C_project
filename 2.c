#include "stdio.h"
#include "stdlib.h"

int main(void){
    int i = 10;
    int a = 19;

    printf("add = %d\n", i + a);

    system("pause");
    return 0;
}

//===================大津法动态阈值=================OTSU((uint8*)&img[0][0],ROW,COL,0,0,COL,ROW);//
int OTSU(unsigned char *image, int rows, int cols, int x0, int y0, int dx, int dy)
{
    int ihist[256] = {0}; // 图像直方图，256个点
    unsigned char *np; // 图像指针
    int thresholdValue=1; // 阈值
    //当取最佳阈值时，背景应该与前景差别最大，关键在于如何选择衡量差别的标准，而在otsu算法中这个衡量差别的标准就是最大类间方差（英文简称otsu，这也就是这个算法名字的来源）
    //前景：用n1,csum,m1来表示在当前阈值下的前景的点数，质量矩，平均灰度
    //后景：用n2, sum-csum,m2来表示在当前阈值下的背景的点数，质量矩，平均灰度
    int i, j, k; // various counters
    int n, n1, n2, gmin, gmax;//
    double m1, m2, sum, csum, fmax, sb;//sb类间方差  fmax最大类间方差
            
    gmin=255; gmax=0;//图像阈值范围设置初始
    //gmin=230; gmax=60;
    // 生成直方图
    for (i = y0 + 1; i < y0 + dy - 1; i++) {
       np = &image[i*cols+x0+1];
       for (j = x0 + 1; j < x0 + dx - 1; j++) {
               ihist[*np]++;
               if(*np > gmax) gmax=*np;
               if(*np < gmin) gmin=*np;
               np++; /* next pixel */
       }
    }
    sum = csum = 0.0;
    n = 0;

    for (k = 0; k <= 255; k++) {
       sum += (double) k * (double) ihist[k]; /* x*f(x) 质量矩*/
       n += ihist[k]; /* f(x) 质量 */
    }

    if (!n)
    {
       return (20);
    }
    fmax = -1.0;
    n1 = 0;
    for (k = 0; k < 255; k++) {
       n1 += ihist[k];
       if (!n1) { continue; }
       n2 = n - n1;
       if (n2 == 0) { break; }
       csum += (double) k *ihist[k];
       m1 = csum / n1;
       m2 = (sum - csum) / n2;
       sb = (double) n1 *(double) n2 *(m1 - m2) * (m1 - m2);
       if (sb > fmax) {
               fmax = sb;
               thresholdValue = k;
       }
    }
    return (thresholdValue);
}