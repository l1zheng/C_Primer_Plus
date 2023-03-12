#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '!':
            printf("!!");
            count++;
            break;
        case '.':
            printf("!");
            count++;
            break;
        }
    }
    printf("\n一共进行了%d次替换！", count);

    return 0;
}