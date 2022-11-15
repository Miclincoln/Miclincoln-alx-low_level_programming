#include <stdio.h>
#include <stdlib.h>

int *add(int*, int*);

int main(void)
{
    int *c;
    int a = 5000000, b = 100000000;
    c = add(&a, &b);
    printf("%d\n", *c);
    return (0);
}

int *add(int *a, int *b)
{
    int *c = malloc(sizeof(int));
    *c = (*a) + (*b);
    return (c);
}