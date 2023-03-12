#include <stdio.h>
#include <ctype.h>

#define pay_rate1 8.75
#define pay_rate2 9.33
#define pay_rate3 10.00
#define pay_rate4 11.20
#define tax1 0.15
#define tax2 0.20
#define tax3 0.25

void show_Menu(void);

int main(void)
{
    int hour;
    double salary_sum, tax, salary, salary_perhour;
    char choice;
    show_Menu();
    while ((choice = getchar()) != '5')
    {
        if (choice == '\n')
            continue;
        // 选择薪资
        switch (choice)
        {
        case '1':
            salary_perhour = pay_rate1;
            break;
        case '2':
            salary_perhour = pay_rate2;
            break;
        case '3':
            salary_perhour = 10.00;
            break;
        case '4':
            salary_perhour = pay_rate4;
            break;
        }
        // 工作时长
        printf("请输入你每周的工作小时数：");
        scanf("%d", &hour);

        // 计算薪资
        hour = (hour > 40) ? (40 + ((hour - 40) * 1.5)) : hour;
        salary_sum = hour * salary_perhour;
        if (salary_sum <= 300)
            tax = salary_sum * pay_rate1;
        else if (salary_sum <= 450)
            tax = 300 * tax1 + (salary_sum - 300) * tax2;
        else
            tax = 300 * tax1 + 150 * tax2 + (salary_sum - 450) * tax3;
        salary = salary_sum - tax;
        printf("\n工资总额为%.3f$ 税金为%.3f$ 净收入为%.3f$\n\n\n", salary_sum, tax, salary);
        show_Menu();
    }

    printf("做什么梦呢，还不赶紧去干活！\n");

    return 0;
}

void show_Menu(void)
{
    printf("*************************************\n");
    printf("请输入对应薪资的编号：\n");
    printf("1) $8.75/hr             2) $9.33/hr\n");
    printf("3) $10.00/hr            4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*************************************\n");
}