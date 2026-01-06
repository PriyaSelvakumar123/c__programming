#include<stdio.h>

int main()
{
    int a[10], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] >= 10)
        {
            a[i + 1] += a[i] / 10; 
            a[i] = a[i] % 10;      
        }
    }

    printf("After adjusting carry:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
