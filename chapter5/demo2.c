#include <stdio.h>

int main(void)
{
    int num, buffer;
    puts("请输入一个整数：");
    scanf("%d", &num);

    for(buffer = num ; buffer <= num + 10; buffer++)
    {
        printf("%d ", buffer);
    }

    return 0;
}