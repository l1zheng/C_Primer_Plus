#include <stdio.h>

int main(void)
{
    int row, i, j, k;
    char goal_Letter;
    printf("请输入一个大写字母：\n");
    scanf("%c", &goal_Letter);
    row = goal_Letter - 'A' + 1;

    for (i = 0; i < row; i++)
    {
        char letter_Temp = 'A';

        for (j = 0; j < row-i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i; k++)
        {
            printf("%c", letter_Temp++);
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("%c", letter_Temp - k);
        }

        printf("\n");
    }

    return 0;
}