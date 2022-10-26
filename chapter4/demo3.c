#include <stdio.h>

int main(void)
{
    float input;
    puts("输入一个浮点数");
    scanf("%f", &input);

    // a. 小数点计数法打印
    printf("%.1f\n",input);
    // b. 指数计数法打印
    printf("%.1e\n",input);

    return 0;    
}