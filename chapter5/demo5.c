#include <stdio.h>

int sumCalc(int num);

int main(void)
{
    int count, sum;
    printf("*****该程序用于计算前n个数字的和******\n");
    printf("想计算前多少个数字的和呢？\n");
    scanf("%d", &count);
    sum = sumCalc(count);
    printf("前%d个数字的和是：%d\n", count, sum);

    return 0;
}

int sumCalc(int num)
{
    int ret, count;
    ret = 0;
    count = 0;

    while(count++ < num)
    {
        ret += count;
    }


    return ret;
}