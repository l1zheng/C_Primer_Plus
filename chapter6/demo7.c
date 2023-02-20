#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];
    int i, length;
    printf("请输入一个单词：");
    scanf("%s", word);

    length = strlen(word);

    for(i = length; i>=0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}