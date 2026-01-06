//match sub string
#include<stdio.h>
#include<string.h>
char *p, *c;
void sub(char *p,char *b);
int main()
{
    char a[100],b[100];
    fgets(a,100,stdin);
    a[strcspn(a,"\n")]='\0';
    scanf("%s",b);
    getchar();
    p=a;
    c=b;
    sub(p,c);
}
void sub(char *p,char *b)
{
    int l= strlen(p),l1=strlen(b),count=0;
    for(int i=0;i<l;i++)
    {
        count=0;
        if(p[i]==b[0])
        {
            int j=0,k=i;
            while(j<l1)
            {
                if(b[j]!=p[k])
                break;
                j++;
                k++;
                count++;
            }
        }
        if(count==l1)
        {
        printf("%d",i);
        return;
        }
    }
    return;
}