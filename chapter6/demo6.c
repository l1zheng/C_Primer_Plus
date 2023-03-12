#include <stdio.h>

int main(void)
{
    int upper_Limit, lower_Limit, i;
    printf("请输入表格的上下限：\n");
    scanf("%d %d", &lower_Limit, &upper_Limit);
    printf("您输入的下限是 %d , 上限是 %d.\n", lower_Limit, upper_Limit);

    for(i = lower_Limit; i<upper_Limit; i++)
    {
        printf("%d %d %d \n", i, i*i, i*i*i);
    }
    return 0;
}
