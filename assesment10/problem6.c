//get int and print same string 
#include<stdio.h>
int main()
{
    int a,b[100],i=0,c;
    scanf("%d",&a);
    while(a!=0)
    {
        c=a%10;
        b[i++]=c+'0';
        a=a/10;
    }
    b[i]='\0';
    for(int j=i-1;j>=0;j--)
    {
        printf("%c\n",b[j]);
    }
    
}