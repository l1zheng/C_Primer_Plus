#include <stdio.h>

double returnMax(double values[], int length);

int main(void)
{
    double values[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    int i , length;
    double result;

    length = sizeof(values)/sizeof(values[0]);
    result = returnMax(values, length);

    printf("数组values：");
    for (i = 0; i < length; i++)
    {
        printf("%.1f ", values[i]);
    }
    printf("中最大的数和最小的数的差值为：%.1f \n", result);

    return 0;
}

double returnMax(double values[], int length)
{
    int i;
    double max, min, ret;
    max = values[0];
    min = values[0];
    for (i = 0; i < length; i++)
    {
        max = max > values[i] ? max : values[i];
        min = min < values[i] ? min : values[i];
    }

    ret = max - min;
    return ret;
}