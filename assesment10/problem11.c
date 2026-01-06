//divide a number from string
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int s1[1000];
    int k = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int len = strlen(s);

    for(int i = 0; i < len; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')   
            s1[k++] = s[i] - '0';
    }
    for(int j = 0; j < k; j++)
    {
        printf("%d", s1[j]);
    }

    return 0;
}
