#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXD 50         
#define MAXLEN 60       
void strip_leading_zeros(char *s) {
    int i = 0, n = strlen(s);
    while (i < n - 1 && s[i] == '0') i++;
    if (i > 0) memmove(s, s + i, n - i + 1);
}

int valid_number(const char *s) {
    int n = strlen(s);
    if (n == 0 || n > MAXD) return 0;
    for (int i = 0; i < n; i++)
        if (!isdigit((unsigned char)s[i])) return 0;
    if (n > 1 && s[0] == '0') return 0;
    return 1;
}

int cmp_abs(const char *a, const char *b) {
    int na = strlen(a), nb = strlen(b);
    if (na != nb) return (na < nb) ? -1 : 1;
    return strcmp(a, b);
}

void big_add(const char *a, const char *b, char *c) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 0, carry = 0;
    char tmp[MAXD + 2];

    while (i >= 0 || j >= 0 || carry) {
        int da = (i >= 0) ? a[i--] - '0' : 0;
        int db = (j >= 0) ? b[j--] - '0' : 0;
        int s = da + db + carry;
        tmp[k++] = (char)('0' + (s % 10));
        carry = s / 10;
    }
    for (int p = 0; p < k; p++)
        c[p] = tmp[k - 1 - p];
    c[k] = '\0';
}

void big_sub(const char *a, const char *b, char *c) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 0, borrow = 0;
    char tmp[MAXD + 1];

    while (i >= 0) {
        int da = a[i--] - '0' - borrow;
        int db = (j >= 0) ? b[j--] - '0' : 0;
        if (da < db) {
            da += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        tmp[k++] = (char)('0' + (da - db));
    }
    while (k > 1 && tmp[k - 1] == '0') k--;  
    for (int p = 0; p < k; p++)
        c[p] = tmp[k - 1 - p];
    c[k] = '\0';
}

void big_mul(const char *a, const char *b, char *c) {
    int na = strlen(a), nb = strlen(b);
    int res[MAXD * 2] = {0};

    for (int i = na - 1; i >= 0; i--) {
        int da = a[i] - '0';
        int carry = 0;
        for (int j = nb - 1; j >= 0; j--) {
            int db = b[j] - '0';
            int pos = (na - 1 - i) + (nb - 1 - j);
            int sum = res[pos] + da * db + carry;
            res[pos] = sum % 10;
            carry = sum / 10;
        }
        int pos = (na - 1 - i) + nb;
        while (carry) {
            int sum = res[pos] + carry;
            res[pos] = sum % 10;
            carry = sum / 10;
            pos++;
        }
    }

    int k = MAXD * 2 - 1;
    while (k > 0 && res[k] == 0) k--;
    for (int i = 0; i <= k; i++)
        c[i] = (char)('0' + res[k - i]);
    c[k + 1] = '\0';
}

void big_div(const char *a, const char *b, char *q, char *r) {
    char cur[MAXD + 2] = "0";
    char one[] = "1";
    int na = strlen(a);
    q[0] = '\0';
    r[0] = '\0';
    for (int i = 0; i < na; i++) {
        int len = strlen(cur);
        cur[len] = a[i];
        cur[len + 1] = '\0';
        strip_leading_zeros(cur);

        int count = 0;
        while (cmp_abs(cur, b) >= 0) {
            char tmp[MAXD + 2];
            big_sub(cur, b, tmp);
            strcpy(cur, tmp);
            count++;
        }
        int qlen = strlen(q);
        q[qlen] = (char)('0' + count);
        q[qlen + 1] = '\0';
    }

    strip_leading_zeros(q);
    if (q[0] == '\0') { q[0] = '0'; q[1] = '\0'; }

    strcpy(r, cur);
    strip_leading_zeros(r);
}

int parse_line(char *line, char *a, char *op, char *b) {
    char *p = line;
    while (*p && isspace((unsigned char)*p)) p++;

    int i = 0;
    while (*p && !isspace((unsigned char)*p) && *p != '+' &&
           *p != '-' && *p != '*' && *p != '/') {
        a[i++] = *p++;
    }
    a[i] = '\0';
    if (*p == '+' || *p == '-' || *p == '*' || *p == '/')
        *op = *p++;
    else
        return 0;

    while (*p && isspace((unsigned char)*p)) p++;

    i = 0;
    while (*p && !isspace((unsigned char)*p)) {
        b[i++] = *p++;
    }
    b[i] = '\0';

    return (a[0] != '\0' && b[0] != '\0');
}

int main(void) {
    char line[2 * MAXLEN];
    char a[MAXLEN], b[MAXLEN], q[2 * MAXD + 2], r[MAXD + 2];
    char op;

    while (1) {
        printf("Calc> ");
        if (!fgets(line, sizeof(line), stdin)) break;

        size_t len = strlen(line);
        if (len && line[len - 1] == '\n') line[len - 1] = '\0';

        if (strcmp(line, "Exit") == 0) break;

        if (!parse_line(line, a, &op, b) ||
            !valid_number(a) || !valid_number(b)) {
            printf("Invalid input\n");
            continue;
        }

        if (op == '+') {
            big_add(a, b, q);
            strip_leading_zeros(q);
            printf("%s\n", q);
        } else if (op == '-') {
            int cmp = cmp_abs(a, b);
            if (cmp < 0) {
                printf("Result would be negative\n");
                continue;
            }
            big_sub(a, b, q);
            strip_leading_zeros(q);
            printf("%s\n", q);
        } else if (op == '*') {
            big_mul(a, b, q);
            strip_leading_zeros(q);
            printf("%s\n", q);
        } else if (op == '/') {
            if (strcmp(b, "0") == 0) {
                printf("Division by zero\n");
                continue;
            }
            big_div(a, b, q, r);
            printf("Quotient: %s  Remainder: %s\n", q, r);
        } else {
            printf("Unknown operator\n");
        }
    }
    return 0;
}
