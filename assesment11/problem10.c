//con two string
#include <stdio.h>
#include<string.h>
void strcon(char *src, char *dst, int size,int size2,char*arr);
int main()
{
     char src[100];
     char dst[100];
     char arr[100];
     fgets(src,sizeof(src),stdin);
     src[strcspn(src,"\n")]='\0';
     fgets(dst,sizeof(dst),stdin);
     dst[strcspn(dst,"\n")]='\0';
     int len =strlen(src);
     int len2=strlen(dst);
    strcon(src, dst, len,len2,arr);
    for(int i=0;i<len+len2;i++)
    {
     printf("%c",arr[i]);
    }
}
void strcon(char*src,char *dst,int size,int size2,char*arr)
{
    int count=0,j=0;
    for (int i = 0; i < size; i++)
    {
       *(arr+j)=*(src+i);
       j++;
    }
    for (int i =0; i < size2; i++)
    {
       *(arr+j)=*(dst+i);
       j++;
    }
}