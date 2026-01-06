#include<stdio.h>
void gcd(int a, int b);
int l;
int main()
{
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d %d",&m, &n);
    gcd(m,n);
    printf("%d",l);
}

void gcd(int a, int b)
{
    int x=a,y=b,temp;
   while(y!=0)
    {
        temp=x%y;
        x=y;
        y=temp;
    } 
    l=x;
    return ;
}

