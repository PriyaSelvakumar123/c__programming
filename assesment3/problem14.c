
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the number :");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    c=c%10;
    d=a/100;
    d=d%10;
    e=a/1000;
    if((b==d)&&(c==e))
    {
        printf("Success");
    }
    else
    {
      printf("Failure");
    }
}