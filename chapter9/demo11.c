#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n, result;
    printf("请输入一个正整数n：");
    scanf("%d", &n);
    result = fibonacci(n);
    printf("斐波那契数列第%d个数字是%d\n", n, result);
    return 0;
}

int fibonacci(int n)
{
    if(n <= 0)
    {
        printf("请输入一个正整数！");
        return -1;
    }
    else if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
