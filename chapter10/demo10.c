#include <stdio.h>

void addArrayToAnother(int *arry1, int *arry2, int *arry3, int num);

int main(void)
{
    int i;
    int array1[3] = {1, 2, 3};
    int array2[3] = {4, 5, 6};
    int array3[3];

    addArrayToAnother(array1, array2, array3, 3);

    printf("第一个数组内的元素为：\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
    printf("第二个数组内的元素为：\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");
    printf("第三个数组内的元素为：\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", array3[i]);
    }
    printf("\n");

    return 0;
}

void addArrayToAnother(int *arry1, int *arry2, int *arry3, int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        arry3[i] = arry1[i] + arry2[i];
    }
}