//WAP to count the number of two digit perfect squares in a given number.
#include<stdio.h>
int main()
{
    int a,c=0,d=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for(;a>0;)
    {
        c=a%100;
        for(int i=4;i<c/2;i++)
        {
            if(i*i==c)
            {
                d++;
                break;
            }
        }
        a=a/10;
    }
    printf("%d",d);
}
