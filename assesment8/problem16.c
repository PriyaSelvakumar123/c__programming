//bigest 4 digit div by 7 and 9
#include<stdio.h>
int disp_bigest_4digit_div7_9();
int flag = 0,c;
int main()
{
     int l=disp_bigest_4digit_div7_9();
     printf("%d",l);
    
}
int  disp_bigest_4digit_div7_9()
{
    int i=9999;
     while(i>=1000)
    {
        if((i%7==0)&&(i%9==0))
        {
            return i;
        }
        i--;
    }
    
}
