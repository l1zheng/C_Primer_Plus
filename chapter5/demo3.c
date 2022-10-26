#include <stdio.h>

int main(void)
{
    int num;
    int week, day;

    puts("请输入天数：");
    
    while (num > 0 && scanf("%d", &num)==1)
    {
        week = num / 7;
        day = num % 7;
        printf("%d 天是 %d 星期 %d 天\n", num, week, day);
    }

    return 0;
}