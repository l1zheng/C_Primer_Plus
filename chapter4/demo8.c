#include <stdio.h>
#define GALTOL 3.785
#define MILETOKM 1.609

int main(void)
{
    double gal, mile;
    double l, km;
    double eff;

    puts("请输入旅行的里程和消耗的汽油量：");
    scanf("%lf %lf", &mile, &gal);

    printf("每加仑汽油行驶的英里数为:%fmiles.\n", mile / gal);

    l = gal * GALTOL;
    km = mile * MILETOKM;

    eff = (l / km) * 100;

    printf("效率为%.1f L/100km.\n", eff);

    return 0;

}