//write a function to display numbers from 1 to 5 in ascending order
#include<stdio.h>
void disp_assend(int);
int main()
{
    int x=1;
    disp_assend(x);
}
void disp_assend(int n)
{
   while(n<=5)
   {
         printf("%d\n",n);
         n++;
   }
}