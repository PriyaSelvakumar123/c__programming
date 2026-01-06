//count words
#include<stdio.h>
#include<string.h>
char *p;
int l;
void countwords(char *p);
int main()
{
    char a[100],*b;
    fgets(a,100,stdin);
    a[strcspn(a,"\n")]='\0';
    l=strlen(a);
    b=a;
    countwords(b);
}
void countwords(char *p)
{
    int count=1,i=0;
    while(p[i]!=0)
    {
        if((p[i]==' ')&&(p[i-1]!=' ')&&(p[i+1]!=' '))
        count++;
        i++;
    }
    printf("%d",count);
    return ;
}