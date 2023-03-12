#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int odd, even, odd_count, odd_average, even_count, even_average, temp;
    odd = even = odd_count = odd_average = even_count = even_average = temp = 0;
    char ch;

    // 0-9的ascii码为48-57
    printf("请输入数字，以0结束。\n");
    while (isdigit(ch = getchar()))
    {

        if (ch == '0')
        {
            break;
            ;
        }
        temp = ch - 48;
        // 偶数
        if (temp % 2 == 0)
        {
            even_count++;
            even += temp;
        }
        else
        {
            odd_count++;
            odd += temp;
        }
    }

    odd_average = (odd_count == 0) ? 0 : odd / odd_count;
    even_average = (even_count == 0) ? 0 : even / even_count;
    printf("共输入了%d个偶数, 平均值为%d. \n", even_count, even_average);
    printf("共输入了%d个奇数, 平均值为%d. \n", odd_count, odd_average);

    return 0;
}