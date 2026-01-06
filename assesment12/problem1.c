#include <stdio.h>
#include <string.h>

char *a, *b;
int c[60];
int len;

void getnumbers(char *n1, char *n2);
void addnumbers(char *n1, char *n2);
void print();

int main()
{
    char n1[55], n2[55];

    a = n1;
    b = n2;

    getnumbers(a, b);
    addnumbers(a, b);
    print();

    return 0;
}

void getnumbers(char *n1, char *n2)
{
    fgets(n1, 55, stdin);
    n1[strcspn(n1, "\n")] = '\0';

    fgets(n2, 55, stdin);
    n2[strcspn(n2, "\n")] = '\0';
}
void addnumbers(char *n1, char *n2)
{
    int i, j, carry = 0;
    int l1 = strlen(n1);
    int l2 = strlen(n2);
    i = l1 - 1;
    j = l2 - 1;
    len = 0;
    while(i >= 0 || j >= 0 || carry)
    {
        int d1 = (i >= 0) ? n1[i] - '0' : 0;
        int d2 = (j >= 0) ? n2[j] - '0' : 0;
        int sum = d1 + d2 + carry;
        c[len++] = sum % 10;
        carry = sum / 10;
        i--;
        j--;
    }
}
void print()
{
    for(int i = len - 1; i >= 0; i--)
    {
        printf("%d", c[i]);
    }
}
