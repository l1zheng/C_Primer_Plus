#include <stdio.h>

int main(void)
{
    char ch;
    int space_count, enter_count, other_count;
    space_count = enter_count = other_count = 0;

    printf("请任意输入，输入#以停止。\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case 0x20:
            space_count++;
            break;
        case '\n':
            enter_count++;
            break;
        default:
            other_count++;
        } /* code */
    }
    printf("一共输入了%d个空格, %d个换行符, %d个其他字符。\n", space_count, enter_count, other_count);

    return 0;
}
