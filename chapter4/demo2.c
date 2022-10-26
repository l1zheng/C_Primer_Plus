#include <stdio.h>
#include <string.h>

int main(void)
{
    char lastName[20];
    char firstName[20];

    // 输入姓和名
    puts("输入你的姓：");
    scanf("%s",lastName);
    puts("输入你的名：");
    scanf("%s",firstName);

    // a. 打印名和姓，包括双引号
    printf("\"%s,%s\"”\n", firstName, lastName);
    // b. 在宽度为20的字段右端打印名和姓，包括双引号
    printf("\"%20s,%s\"\n",firstName, lastName);
    // c. 在宽度为20的字段左端打印名和姓，包括双引号
    printf("\"%s,%-20s\"\n",firstName, lastName);
    // d. 在比姓名宽度宽3的字段中打印名和姓
    printf("%*s,%s\n",(int)(strlen(lastName) + strlen(firstName)), firstName, lastName);

    return 0;

}