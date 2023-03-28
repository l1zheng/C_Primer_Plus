#include <stdio.h>

int returnMax(double values[], int length);

int main(void)
{
    double values[] = {1, 2, 3, 4, 5, 6};
    int i , length;
    int maxValue;
    length = sizeof(values)/sizeof(values[0]);
    maxValue = returnMax(values, length);

    printf("数组values：");
    for (i = 0; i < length; i++)
    {
        printf("%.1f ", values[i]);
    }
    printf("中最大数的下标为：%d \n", maxValue);

    return 0;
}

int returnMax(double values[], int length)
{
    int temp, i, index;
    temp = values[0];
    index = 0;
    for (i = 0; i < length; i++)
    {
        index = temp > values[i] ? index : i;
    }

    return index;
}