//copy one string to another string
#include <stdio.h>
#include<string.h>
int size;
int l=0;
void strcmp(char *src, char *dst)
{
    int i,size,size1;
    size=strlen(src);
    size1=strlen(dst);
    if(size==size1)
    {
    for(i = 0; i < size; i++)
    {
        if(dst[i] != src[i])
        {
            l=1;
        }
    }
    }
   else
   {
    l=1;
   }
}
int main()
{
    char src[50],dst[50];
    scanf("%s",src);
    getchar();
    scanf("%s",dst);
    getchar();
    strcmp(src, dst);
    if(l==0)
    printf("Success");
    else
    {
        printf("failure");
    }
}
