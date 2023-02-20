#include <stdio.h>

int main(void)
{
    int upper_Limit, lower_Limit, result, i;
    printf("请输入下限整数和上限整数：");
    
    while (scanf("%d %d", &lower_Limit, &upper_Limit)==2 && upper_Limit > lower_Limit)
    {
        result = 0;
        for(i = lower_Limit; i < upper_Limit+1; i++)
        {
            result += i*i;
        }
        printf("从%d到%d的平方和为%d.\n",lower_Limit, upper_Limit, result);
        /* code */
    }
    printf("结束\n");
    return 0;
}