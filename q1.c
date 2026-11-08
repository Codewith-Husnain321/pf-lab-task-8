#include <stdio.h>

int main()
{
    int age = 20;

    int *p = &age;

    printf("Age = %d\n", age);
    printf("Value using pointer = %d\n", *p);

    *p = 21;

    printf("Updated age = %d\n", age);

    return 0;
}