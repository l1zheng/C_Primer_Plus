#include <stdio.h>

#define base_salary 1000;

int main(void)
{
    int hour, salary_sum, tax, salary;
    printf("请输入一周工作的小时数：");
    scanf("%d", &hour);

    if (hour > 40)
        hour *= 1.5;
    salary_sum  = hour * base_salary;

    tax = 300 * 0.15 + 150 * 0.2 + (salary_sum - 450) * 0.25;
    salary = salary_sum - tax;
    printf("工资总额为%d$ 税金为%d$ 净收入为%d$\n", salary_sum, tax, salary);


    return 0;
}
