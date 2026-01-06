//write a function to display numbers from 1 to 5 in ascending order
#include<stdio.h>
int sum;
int disp_assend(int);
int main()
{
    int x=1,y;
    y=disp_assend(x);
    printf("%d",y);
}
int disp_assend(int n)
{
   while(n<=5)
   {
        sum=sum+n;
         n++;
   }
   return sum;
}