#include <stdio.h>

double cubeCalc(double num);

int main(void)
{
    double result, number;

    printf("请输入一个double类型的数:");
    scanf("%lf", &number);
    result = cubeCalc(number);

    printf("%lf的立方是%lf\n", number, result);

    return 0;
}

double cubeCalc(double num)
{
    double ret;
    ret = num * num * num;
    return ret;
}
