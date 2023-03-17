#include <stdio.h>

double min( double x, double y);

int main(void)
{
	double x, y, result;
	printf("请输入两个数字：");
	scanf("%lf %lf", &x, &y);
	result = min(x, y);
	printf("%lf和%lf中较小的是%lf.\n",x ,y , result);

	return 0;
}

double min( double x, double y)
{
	return(x > y ? y : x);
}
