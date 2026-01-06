//increment by 1
#include <stdio.h>
void increment(int *p, int n);
int main()
{
    int a[50], n, i;
    scanf("%d", &n);          

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  
    }
    increment(a, n);       
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]); 
    }
    return 0;
}
void increment(int *p, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        p[i] = p[i] + 1;    
    }
}
