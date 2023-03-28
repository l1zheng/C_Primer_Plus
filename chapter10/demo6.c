#include <stdio.h>

void bubbleSort(double * src);

int main(void)
{
    int i = 0;
    double values[7] = {2.3, 4.2, 5.3, 3.4, 6.5, 1.3, 8.1};

    

    printf("排序前的数字是");
    for (i = 0; i < 7; i++)
    {
        printf("%.1f ", values[i]);
    }

    printf("\n");

    bubbleSort(values);

    printf("排序后的数字是");
    for (i = 0; i < 7; i++)
    {
        printf("%.1f ", values[i]);
    }

    printf("\n");


    return 0;
}

void bubbleSort(double * src)
{
    int i, j;
    double temp;
    
    for (i = 0; i < 7 - 1; i++)
    {
        for (j = 0; j < 7 - i - 1; j++)
        {
            if (src[j] < src[j+1])
            {
                temp = src[j];
                src[j] = src[j+1];
                src[j+1] = temp;
            }
        }
    }
}