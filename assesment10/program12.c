//int to charecter
#include <stdio.h>
#include<string.h>
int main()
{
    int a[50];
    char a1[50];
    int k=0,n;
    printf("Enter number of digits: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);           
    }
    for(int i=0;i<n;i++)
    {
      a1[k]=a[i]+'0';
      k++;
    }
    a1[k]='\0';
    printf("%s",a1);
}