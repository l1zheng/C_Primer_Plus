#include <stdio.h>

int main(void)
{
    int nums[8],i,j,temp;
    temp = 1;
    for(i=0;i<8;i++)
    {
        temp = 1;
        for(j=0;j<i+1;j++)
        {
            temp *= 2;
        }
        nums[i] = temp;
    }
    
    do
    {
        printf("%d\n",nums[i-1]);
        /* code */
    } while (i-->1);
    
    return 0;
}