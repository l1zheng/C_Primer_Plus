#include <stdio.h>

int main(void)
{
    double sum1, sum2;
    int sign, n, i;

    printf("请输入次数：");
    while (scanf("%d", &n) == 1 && n > 0)
    {
        sign = -1;
        sum1 = 0;
        sum2 = 0;
        for (i = 1; i <= n; i++)
        {
            sign *= -1;
            sum1 += 1.0 / i;
            sum2 += 1.0 / i * sign;
        }
        printf("%d项数的总和分别是%f , %f\n", n, sum1, sum2);
    }

    return 0;
}