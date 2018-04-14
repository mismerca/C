#include <stdio.h>
#include <stdlib.h>

int* a;
int* b;

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}


int main()
{
    a = malloc(sizeof(*a));
    b = malloc(sizeof(*b));

    int a = 5; int b = 2;

    printf("a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);

    return 0;
}
