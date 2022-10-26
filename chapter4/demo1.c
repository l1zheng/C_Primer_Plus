#include <stdio.h>

int main(void)
{
    char lastName[20];
    char firstName[20];

    // 输入姓和名
    puts("输入你的姓：");
    scanf("%s",lastName);
    puts("输入你的名：");
    scanf("%s",firstName);

    printf("%s,%s\n", firstName, lastName);

    return 0;

}