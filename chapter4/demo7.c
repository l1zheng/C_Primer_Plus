#include <stdio.h>
#include <float.h>

int main(void)
{
    float fNum;
    double dNum;
    int i;
    fNum = 1.0 / 3.0;
    dNum = 1.0 / 3.0;

    printf("%.6f\n",fNum);
    printf("%.12f\n",fNum);
    printf("%.16f\n",fNum);

    printf("%.6f\n",dNum);
    printf("%.12f\n",dNum);
    printf("%.16f\n",dNum);
    
    printf("%d\n", FLT_DIG);
    printf("%d\n", DBL_DIG);
    
    return 0;
}