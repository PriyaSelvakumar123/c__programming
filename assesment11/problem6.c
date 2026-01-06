//copy one string to another string
#include <stdio.h>
#include<string.h>
int size;
void memcpy_int(char *src, char *dst)
{
    int i,size;
    size=strlen(src);
    for(i = 0; i < size; i++)
    {
        dst[i] = src[i];
    }
    dst[i]='\0';
}
int main()
{
    char src[50],dst[50];
    scanf("%s",src);
    getchar();
    memcpy_int(src, dst);
    printf("%s",dst);
}
