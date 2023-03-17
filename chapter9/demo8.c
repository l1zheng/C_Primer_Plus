#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;
    printf("请输入一个实数和一个整数：\n");
    scanf("%lf %d", &x, &exp);
    xpow = power(x, exp);
    printf("%.2f的%d次方是%.2f.\n", x, exp, xpow);
    return 0;
}

double power(double n, int p)
{
    if (p == 0) {
        return 1.0;
    }
    else if (p > 0) {
        return n * power(n, p - 1);
    }
    else {
        return 1.0 / power(n, -p);
    }
}
