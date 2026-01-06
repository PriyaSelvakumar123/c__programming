// C program to count the number of prime numbers between 1 to 10
#include<stdio.h>

int main()
{
    int i=2,j,count = 0,flag;
    while(i <= 10)
    {
        flag = 0;
        j = 2;
        while(j<=i/2)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
            j++;
        }
        if(flag == 0)
        {
            count++;
        }
        i++;
    }
 printf("%d", count);
    return 0;
}
