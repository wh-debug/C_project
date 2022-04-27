#ifndef __LOCALBASE_PID_
#define __LOCALBASE_PID_


struct localBase_pid
{
    float Expected_Value; //　期望值
    float Measured_value; //　传感器读取值

    float Kp; 
    float Sampling_period;        // 采样周期
    float integration_constants;  // 积分常数
    float Differential_constants; // 微分常数

    float Current_bias;    // 作为Ek
    float Last_bias;       // 上次偏差Ek-1
    float Historical_bias; // 历史偏差之和

    
    float baseOut;        // 作为out0

    float alpha;  // 不完全微分　取值范围: 0~1
    float pid_calculate; // pid计算输出值

};





#endif 


