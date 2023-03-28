/*
 输入一个十进制数，返回其二进制数
 */
#include <stdio.h>

void to_binary(unsigned int num);

int main(void)
{
	unsigned int num;
	printf("请输入一个正整数，按q退出：");
	while ((scanf("%u", &num)) == 1)
	{
		printf("%u的二进制表示是：", num);
		to_binary(num);
		putchar('\n');
		printf("请输入一个正整数，按q退出：");
	}

	return 0;
}

void to_binary(unsigned int num)
{
	int r;
	r = num % 2;
	if (num >= 2)
	{
		to_binary(num / 2);
	}
	putchar(r == 0 ? '0' : '1');
	
	return;
}















