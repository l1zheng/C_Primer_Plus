#include <stdio.h>

void Temperatures(double huashiTemperature);

int main(void)
{
    double huashiTemperature;
    
    while (scanf("%lf", &huashiTemperature) == 1)
    {
        Temperatures(huashiTemperature);
        /* code */
    }
    
    printf("溜了溜了！")
    return 0;
}

void Temperatures(double huashiTemperature)
{
    const double sheshiTemperature = 5.0/9.0;
    const double kaishiTemperature = 273.16;
    double ssTemperature, ksTemperature;
    ssTemperature = sheshiTemperature * (huashiTemperature - 32.0);
    ksTemperature = sheshiTemperature + huashiTemperature;
    printf("您输入的温度是：%.2f 华氏度， %.2f 摄氏度， %.2f 开氏度.\n", huashiTemperature, ssTemperature, ksTemperature);

}