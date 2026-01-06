//concorent two array
#include<stdio.h>
#include<stdlib.h>
void intcon(int *src1,int size1,int *src2,int size2,int *dst);
int main()
{
   int *src1,*src2,size1,size2,i,l,*dst;
   scanf("%d %d",&size1,&size2);
   src1 = (int *)malloc(size1 * sizeof(int));
   src2 = (int *)malloc(size2 * sizeof(int));
   dst  = (int *)malloc((size1 + size2) * sizeof(int));
   for(i=0;i<size1;i++)
   {
    scanf("%d",&src1[i]);
   }
   for(i=0;i<size2;i++)
   {
    scanf("%d",&src2[i]);
   }
   l=size1+size2;
   intcon(src1,size1,src2,size2,dst);
   for(i=0;i<l;i++)
   {
    printf("%d",dst[i]);
   }
}
void intcon(int *src1,int size1,int *src2,int size2,int *dst)
{
    int i;
    for(int i=0;i<size1;i++)
    {
       dst[i]=src1[i];
    }
    for(int j=0;j<size2;j++)
    {
       dst[size1+j]=src2[j];
    }
}
