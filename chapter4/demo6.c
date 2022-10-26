#include <stdio.h>
#include <string.h>

// 右端对齐指的是字符显示在右端
// 左端对齐指的是字符显示在左端

int main(void)
{
    char lastName[20];
    char firstName[20];

    // 输入姓和名
    puts("输入你的姓：");
    scanf("%s",lastName);
    puts("输入你的名：");
    scanf("%s",firstName); 

    printf("%s %s\n", lastName, firstName);
    printf("%*d%*d\n",(int)strlen(lastName),(int)strlen(lastName),\
    (int)(strlen(firstName)+1),(int)strlen(firstName));

    printf("%s %s\n", lastName, firstName);
    printf("%d%*d\n",(int)strlen(lastName),(int)strlen(lastName)+1,(int)strlen(firstName));

}