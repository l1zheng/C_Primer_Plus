#include <stdio.h>

int main(void)
{
	char ch;
	int count=0;
	char flag=0;
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			flag = 1;
			continue;
		}
		if (ch == 'i' && flag)
			count++;
			flag = 0;
	}
	
	printf("ei共出现了%d次！\n",count);
	return 0;
}
