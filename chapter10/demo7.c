#include <stdio.h>

void copyArray(double * src, double * target);

int main(void)
{
    int i, j;
    double * ptr1;    
    double * ptr2;    
    
    double sourceArray[2][3] = {{1.2,2.3,3.4},{4.5,5.6,6.7}};
    double targetArray[2][3];

    ptr1 = sourceArray[0];
    ptr2 = targetArray[0];

    copyArray(ptr1, ptr2);
    printf("targetArray中的元素为：\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.1f ", targetArray[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}

void copyArray(double * src, double * target)
{
    int i,j;
    for (i = 0; i < 2; i++)
    {   
        for (j = 0; j < 3; j++)
        {
            *target++ = *src++;
        }
        
    }
}