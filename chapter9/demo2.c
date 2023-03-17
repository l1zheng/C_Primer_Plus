#include <stdio.h>

void chline (char, int ,int);

int main(void)
{
	int j, i;
	char ch;
	printf("请输入要打印的字符：");
	scanf("%c", &ch);
	putchar('\n');
	printf("请输入行和列：");
	scanf("%d %d", &i, &j);
	chline(ch, i ,j);

	return 0;
}

void chline(char ch, int i, int j)
{
	int temp1, temp2;
	for (temp1 = 0; temp1 < i; temp1++)
	{
		for (temp2 = 0; temp2 < j; temp2++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
