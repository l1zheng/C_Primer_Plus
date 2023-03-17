#include <stdio.h>

void larger_of(double *, double *);

int main(void)
{
	double a, b;
	printf("请输入两个数：");
	scanf("%lf %lf", &a, &b);
	putchar('\n');
	printf("您输入的a为%lf，b为%lf.\n",a ,b);
	larger_of(&a, &b);
	printf("交换后的a为%lf，b为%lf.\n",a, b);

	return 0;
}

void larger_of(double * a, double * b)
{
	*a = (*a) >= (*b) ? *a : *b;
	*b = (*a) >= (*b) ? *a : *b;
}

