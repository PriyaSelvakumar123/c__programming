#include<stdio.h>
int count_total_digits(int x,int dup);
int main()
{
    int a,dup;
    scanf("%d",&a);
    dup=a;
    if(a==0)
    printf("0");
    else
    printf("%d",count_total_digits(a,dup));
}
int count_total_digits(int x,int dup)
{
    static int count=1;
    if(x==0){
        count=count/10;
        return ((dup%10*count)+((dup%(count))/10)*10+(dup/count));  
    }
    
    
    count=count*10;
    count_total_digits(x/10,dup);
}