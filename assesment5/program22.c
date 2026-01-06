//C program to count the number of odd digits in a given number
#include<stdio.h>
int main()
{
    int a,c=0,d=0,e;
    printf("Enter the number:");
    scanf("%d",&a);
    for(;a>1;)
    {  
       c=a%100;
       c=c%10;
       if(c%2!=0)
       {
        d++;
        printf("%d\n",c);
       }
       a=a/10;
       e++;
    }
    if(e%2==0)
    d=d-1;
    printf("%d",d);
}