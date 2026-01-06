//get string and print same string count 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i=0;
    fgets(a, 100, stdin);
    a[strcspn(a, "\n")] = '\0';
    while(a[i]!=0)
    {
        i++;
    }
    printf("%d",i);
}