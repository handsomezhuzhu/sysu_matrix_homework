#include <stdio.h>

int add(int a[], int n_a, int b[], int n_b, int c[])
{
    int n = n_a > n_b ? n_a : n_b;
    int tmp = 0;

    for (int i = 0; i < n; ++i)
    {
        tmp += a[i] + b[i];
        c[i] = tmp % 10;
        tmp /= 10;
    }

    if (tmp)
    {
        c[n] = tmp;
        ++n;
    }

    return n;
}

void reverse(int a[], int n)
{
    for (int i = 0, j = n - 1; i < j; ++i, --j)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}

int read_integer(int a[])
{
    int n = 0;
    char c = 0;
    while (scanf("%c", &c) != -1  && c != ' ' && c != '\n')
    {
        a[n] = c - '0';
        ++n;
    }
    return n;
}

int main()
{
    int a[100] = {0};
    int n_a = read_integer(a);
    reverse(a, n_a);

    int b[100] = {0};
    int n_b = read_integer(b);
    reverse(b, n_b);

    int c[100] = {0};
    int n_c = add(a, n_a, b, n_b, c);
    reverse(c, n_c);

    for (int i = 0; i < n_c; ++i)
    {
        printf("%d", c[i]);
    }
    printf("\n");
}