#include <stdio.h>
#include <string.h>

char *a, *b;
int c[110];
int len;

void getnumbers(char *n1, char *n2);
void multiplynumbers(char *n1, char *n2);
void print();

int main()
{
    char n1[55], n2[55];
    a = n1;
    b = n2;

    getnumbers(a, b);
    multiplynumbers(a, b);
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

void multiplynumbers(char *n1, char *n2)
{
    int l1 = strlen(n1);
    int l2 = strlen(n2);
    len = l1 + l2;
    for (int i = 0; i < len; i++)
        c[i] = 0;

    for (int i = l1 - 1; i >= 0; i--)
    {
        for (int j = l2 - 1; j >= 0; j--)
        {
            int mul = (n1[i] - '0') * (n2[j] - '0');
            int sum = mul + c[i + j + 1];

            c[i + j + 1] = sum % 10;
            c[i + j] += sum / 10;
        }
    }
    while (len > 1 && c[0] == 0)
        len--;
}
void print()
{
    for (int i = 0; i < len; i++)
        printf("%d", c[i]);
    printf("\n");
}
