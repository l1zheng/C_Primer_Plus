#include <stdio.h>

int main(void)
{
    int row = 6;
    int i,j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < i+1; j++)
        {
            printf("%c",'F'-j);
        }
        printf("\n");
    }

    return 0;
}