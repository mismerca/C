#include <stdio.h>
#include <stdlib.h>

int* a;
int* b;

int main()
{
    a = malloc(sizeof(*a));
    b = malloc(sizeof(*b));

    int a = 5; int b = 2;

    printf("a=%d b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d b=%d\n", a, b);

    return 0;
}
