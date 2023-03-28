#include <stdio.h>

void copyArray(int a, int b, double src[a][b], double target[a][b]);
void showArray(int a, int b, double src[a][b], double target[a][b]);

int main(void)
{
    double array[3][5] = {{1, 2, 3, 2, 3}, {4, 5, 6, 2, 3}, {7, 8, 9, 2, 3}};
    int a = 3;
    int b = 5;
    double target[a][b];
    copyArray(a, b, array, target);
    showArray(a, b, array, target);

    return 0;
}

void showArray(int a, int b, double src[a][b], double target[a][b])
{
    int i, j;
    printf("源数组的内容是：\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%.2f ", src[i][j]);
        }
        printf("\n");
    }
    printf("目标数组的内容是：\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%.2f ", target[i][j]);
        }
        printf("\n");
    }
}


void copyArray(int a, int b, double src[a][b], double target[a][b])
{
    int i,j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            target[i][j] = src[i][j];
        }
    }
}
