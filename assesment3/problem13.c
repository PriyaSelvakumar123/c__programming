
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number :");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    c=c%10;
    if(b==c)
    {
        printf("Success");
    }
    else
    {
      printf("Failure");
    }
}