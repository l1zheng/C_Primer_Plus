#include <stdio.h>

void sort(double *, double *, double *);

int main(void)
{
	double a, b, c;
	printf("请输入三个数字");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("您输入的三个数字分别为：\n");
	printf("a:%.3lf b:%.3lf c:%.3lf \n", a, b, c);
	
	sort(&a, &b, &c);
	printf("重新排序之后，a b c分别为:\n");
	printf("a:%.3lf b:%.3lf c:%.3lf ", a, b, c);

	return 0;
}

void sort(double * a, double * b, double * c)
{
	double d;
	if (*a < *b)
	{
		d = *a;
		*a = *b;
		*b = d;
	}
	if (*a < *c)
	{
		d = *a;
		*a = *c;
		*c = d;
	}
	if (*b < *c)
	{
		d = *b;
		*b = *c;
		*c = d;
	}
}
