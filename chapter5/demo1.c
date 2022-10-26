#include <stdio.h>

#define MTH 60

int main(void)
{
    int time;
    int hour, min;
    while(time > 0)
    {
        if(time <= 0)
        {
            break;
        }
        puts("请输入分钟：");
        scanf("%d", &time);
        hour = time / MTH;
        min = time % MTH;
        printf("%d h %d min.\n", hour, min);

    }
    
    return 0;
}