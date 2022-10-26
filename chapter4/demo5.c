#include <stdio.h>

int main(void)
{
    float fileSize, downloadSpeed, downloadTime;

    puts("请输入下载速度(Mb/s):");
    scanf("%f",&downloadSpeed);
    puts("请输入文件大小(MB)):");
    scanf("%f",&fileSize);

    downloadTime = (fileSize * 8) / downloadSpeed;

    printf("At %.2f megabits per second, \
a file of %.2f megabytes downloads in %.2f seconds.\n",\
    downloadSpeed, fileSize, downloadTime);

    return 0;
    
}