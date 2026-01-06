//Write a function to display digits of a given number in reverse order using recursion.    
#include<stdio.h>
void disp_reverse_number(int);
int s,c;
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    disp_reverse_number(x);
}

void disp_reverse_number(int n)
{
   if(n==0)
   return;
   c=n%10;
   n=n/10;
   printf("%d",c);
   disp_reverse_number(n);
}