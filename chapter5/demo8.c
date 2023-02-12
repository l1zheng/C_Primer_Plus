#include <stdio.h>

int main(void)
{
    printf("这个程序是用来显示求模运算的结果（请输入正整数）！\n");
    int num1, num2;
    num1 = 1;
    printf("请输入被求模数：\n");
    scanf("%d", &num2);
    
    while (num1 > 0 && num2 > 0)
    {
        printf("请输入求模数：\n");
        scanf("%d", &num1);
        printf("%d %% %d = %d \n", num1, num2, num1%num2);
        /* code */
    }
    printf("结束！");

    return 0;
}