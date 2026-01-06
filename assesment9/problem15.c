//copy to another array
#include<stdio.h>
int digit_sum(int n)
{   int s = 0;
    while(n > 0)
    {
       s += n % 10;
        n /= 10;
    }
    return s;
}
int main()
{
    int a[50], b[50];
    int n = 0, temp;
    while(1)
    {
        scanf("%d", &a[n]);
        if(a[n] == 0)
            break;
        b[n++] = digit_sum(a[n]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j=0; j < n - 1 - i; j++)
        {
            if(b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
