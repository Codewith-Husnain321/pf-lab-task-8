#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 8;
    int y = 3;

    printf("Before swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    swap(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}