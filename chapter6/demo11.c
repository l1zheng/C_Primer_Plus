#include <stdio.h>

int main(void)
{
    int nums[8],i=0;
    printf("请输入8个整数\n");
    printf("1  2  3  4  5  6  7  8\n");
    while (i<8)
    {
        scanf("%d",&nums[i]);
        i++;
        /* code */
    }
    

    for(i=7;i>=0;i--)
    {
        printf("%d",nums[i]);
    }

    return 0;
}