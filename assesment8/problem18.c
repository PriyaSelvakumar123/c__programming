//lcm of two numbers
#include<stdio.h>
int  disp_LCM2(int ,int );
int lcm,c;
int main()
{
    int x,y,l;
    printf("enter two number:");
    scanf("%d %d",&x,&y);
    l=disp_LCM2(x,y);
    printf("%d\n",l);
}

int disp_LCM2(int n,int m)
{
    int temp,e,f;
    e=n,f=m;
   while(m!=0)
    {
        temp=n%m;
        n=m;
        m=temp;
    }
    lcm=e*f/n;
    return lcm;
}