#include <stdio.h>

int returnMax(int values[], int length);

int main(void)
{
    int values[] = {1, 2, 3, 4, 5, 6};
    int maxValue, i , length;
    length = sizeof(values)/sizeof(values[0]);
    maxValue = returnMax(values, length);

    printf("数组values：");
    for (i = 0; i < length; i++)
    {
        printf("%d ", values[i]);
    }
    printf("中最大的数为：%d \n", maxValue);

    return 0;
}

int returnMax(int values[], int length)
{
    int temp, i;
    temp = values[0];
    for (i = 0; i < length; i++)
    {
        temp = temp > values[i] ? temp : values[i];
    }

    return temp;
}