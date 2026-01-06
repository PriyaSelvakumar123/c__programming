//copy from one to another (integer)
#include <stdio.h>
void memcpy_int(int *src, int *dst, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        dst[i] = src[i];
    }
}
int main()
{
    int src[5],dst[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&src[i]);
    }
    int i;
    memcpy_int(src, dst, 5);
    for(i = 0; i < 5; i++)
    {
        printf("%d ", dst[i]);
    }
    return 0;
}
