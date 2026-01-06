//return user input charecter index
#include<stdio.h>
#include<string.h>
void fpos(char *p,char b);
int main()
{
    char a[100],b;
    fgets(a,100,stdin);
    a[strcspn(a,"\n")]='\0';
    scanf("%c",&b);
    getchar();
    fpos(a,b);
    
}
void fpos(char *p,char b)
{
    int l= strlen(p);
    for(int i=0;i<l;i++)
    {
        if(p[i]==b)
        {
             printf("%d ",i)  ;
        }
    }
    return;
}