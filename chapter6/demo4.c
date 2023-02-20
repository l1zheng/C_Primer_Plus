#include <stdio.h>

int main(void)
{
    int i,j;
    int row = 6;
    char letter = 'A';

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < i+1; j++)
        {
            printf("%c", letter++);
        }
        printf("\n");
    }

    return 0;
}