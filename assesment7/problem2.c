//Write a functionto display numbers from n to 1 using loop.
#include<stdio.h>
void disp_descend(int);
int main()
{
    int x=5;
    disp_descend(x);
}
void disp_descend(int n)
{
   while(n>=1)
   {
         printf("%d\n",n);
         n--;
   }
}