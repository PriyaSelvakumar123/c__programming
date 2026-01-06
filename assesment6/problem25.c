//C program to count the number of prime digits in a given number
#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,j;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a>0)
    {  
       b=0;
       c=a%10;
       if(c>=2)
       {
       for(j=2;j<c;j++)
       {
        if((c%j==0))
        {
            b=1;
        }
        }
        if(b!=1)
        {
          d++;
        }
       }
        a=a/10;
    }
    printf("%d",d);
}