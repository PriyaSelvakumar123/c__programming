// Count the number of odd digits in a given number
#include<stdio.h>
int main()
{
    int a,c=0,d=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for(;a>0;)
    {  
       c=a%10;
       if(c%2!=0)
       {
        d++;
       }
       a=a/10;
    }
    printf("%d",d);
}