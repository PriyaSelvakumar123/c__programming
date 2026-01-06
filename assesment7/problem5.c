//Write a function to display all odd numbers below 10 using recursion.
void disp_odd(int);
int sum;
int main()
{
    disp_odd(1);
   
}
void disp_odd(int n)
{
    if(n>10)
    return ;
    if(n%2==1)
    {
        printf("%d\n",n);
    }
    disp_odd(n+1);
}