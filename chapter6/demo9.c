#include <stdio.h>

float test(double num1, double num2);

int main(void)
{
    float number1, number2, result;
    printf("请输入两个浮点数：");
    while(scanf("%f %f", &number1 ,&number2)==2)
    {
        result = test(number1,number2);
        printf("结果是%f. \n", result);
    }
    return 0;
}

float test(double num1, double num2)
{
    float difference, product, result;
    difference = num1 - num2;
    product = num1 * num2;
    result = difference / product;

    return result;
    /* code */
}