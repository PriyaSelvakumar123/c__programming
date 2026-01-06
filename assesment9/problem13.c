//get nums print sucess when first and last equal end if 0
#include<stdio.h>
int main()
{
    int a[100],sum=0;
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(a[i]==0)
        {
        if(a[0]==a[i-1])
        printf("Success");
        else
        {
            printf("failure");
        }
        break;
        }

    }
    
}