//hcf of two number
#include<stdio.h>
int hcf(int a, int b);
int l;
int main()
{
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d %d",&m, &n);
    l=hcf(m,n);
    printf("%d",l);
}

int hcf(int a, int b)
{
    int x=a,y=b,temp;
   while(y!=0)
    {
        temp=x%y;
        x=y;
        y=temp;
    } 

    return x;
}

