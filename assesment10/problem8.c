//vaid a number
#include<string.h>
#include<stdio.h>
int main()
{
    char a[50];
    int i=0;
    fgets(a, 50, stdin);
    a[strcspn(a, "\n")] = '\0';
    while(a[i]!=0)
    {
        if(a[i]>='0'&&a[i]<'9')
         printf("%c ",a[i]);
        i++;
    }
    
}