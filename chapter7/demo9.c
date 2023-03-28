#include <stdio.h>
#include <math.h>

int main(void)
{
	int number,temp,i,j=0;
	printf("请输入一个正整数：");
	scanf("%d", &number);
	
	if (number > 0)
	{
		for (i = 2; i <= number; i++)
		{
			for (temp = 2; temp <= (int)sqrt(i); temp++)
			{
				if (i % temp == 0)
					break;
			}
			if (temp > (int)sqrt(i))
			{
				printf("素数%d    ",i);
			}
		}
	}

	return 0;
}
