#include <stdio.h>

#define CHANGE 1/12

int main(void)
{
    double inch, height;
    char name[20];
    puts("请输入你的身高（英寸）和姓名：");
    scanf("%lf %s", &inch, name);
    printf("%s, 你的身高是%f 英寸.\n", name, inch);
    height = inch * CHANGE;
    printf("%s, 你的身高是%f 英尺.\n", name, height);
    
    return 0;



    

}
