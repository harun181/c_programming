#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of int=%lu bytes\n", sizeof(a));
    printf("Size of float=%lu bytes\n", sizeof(b));
    printf("Size of double=%lu bytes\n", sizeof(c));
    printf("Size of char=%lu byte\n", sizeof(d));

    return 0;
}