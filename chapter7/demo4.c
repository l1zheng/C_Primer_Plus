#include <stdio.h>

int main(void)
{
    char ch;
    int count=0;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            printf("!");
            count++;

        }
        else if (ch == '!')
        {
            printf("!!");
            count++;
        }
    }
    printf("\n一共进行了%d次替换！",count);

    return 0;
}