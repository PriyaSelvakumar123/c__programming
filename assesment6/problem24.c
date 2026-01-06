//WAP to count the number of two digit perfect squares in a given number.
#include<stdio.h>
int main()
{
    int a,c=0,d=0,i;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a>0)
    {
        c=a%100;
        i=4;
        while(i<c/2)
        {
            if(i*i==c)
            {
                d++;
                break;
            }
            i++;
        }
        a=a/10;
    }
    printf("%d",d);
}
