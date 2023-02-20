#include <stdio.h>

int main(void)
{
    char alphabet[26];
    int i;
    for (i = 0; i < 26; i++)
    {
        alphabet[i] = 'a' + i;
        /* code */
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c",alphabet[i]);
    }
    
    return 0;

}
