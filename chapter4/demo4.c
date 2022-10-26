#include <stdio.h>

int main(void)
{
    float height;
    char name[40];
    puts("请输入你的身高（单位：英寸）");
    scanf("%f",&height);
    puts("请输入你的姓名");
    scanf("%s",name);

    printf("%s, you are %.2f feet tall.\n",name, height);

    return 0;
}