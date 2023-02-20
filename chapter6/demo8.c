#include <stdio.h>

int main(void)
{
    float number1, number2, difference, product, result;
    printf("请输入两个浮点数：");

    while (scanf("%f %f", &number1 ,&number2)==2)
    {
        difference = number1 - number2;
        product = number1 * number2;
        result = difference / product;
        printf("两数的差值为%f,两数的乘积为%f, 差值和乘积的商为%f.\n",\
         difference, product, result);
        /* code */
    }
     

    return 0;
}