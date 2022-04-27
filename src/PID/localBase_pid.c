// 位置式PID
#include "localBase_pid.h"

struct localBase_pid pid; // 存储pid算法所需要的数据


void pidInit(void)
{
    pid.Expected_Value = 100;
    pid.Kp = 20;
    pid.Sampling_period = 100;
    pid.integration_constants = 500;
    pid.Differential_constants = 100;

    return 0;
}

void pidCalculate(struct localBase_pid* pid)
{

    return;
}














