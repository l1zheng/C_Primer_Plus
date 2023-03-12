#include <stdio.h>

int main(void)
{
    char ch;
    int count;
    

    printf("请输入字符，将显示对应的ascii码，以#结束。\n");
    // 持续读取输入
    while((ch = getchar()) != '#')
    {
        // 思路：一个计数变量，每8个数打印一次换行符,在一次输入完成后，count要重新计数
        if (ch == '\n')
        {
            printf("\n");
            count = 0;
            continue;
        }
        if (count % 8 == 0)
            printf("\n");
        printf("%c:%d ",ch,ch);
        count++;
    }
    printf("感谢您的使用！");

    return 0;
}