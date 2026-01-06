//lcm of two numbers
#include<stdio.h>
void disp_LCM2(int ,int );
int lcm,c;
int main()
{
    int x,y;
    printf("enter two number:");
    scanf("%d %d",&x,&y);
    disp_LCM2(x,y);
    printf("%d\n",lcm);
}

void disp_LCM2(int n,int m)
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
}