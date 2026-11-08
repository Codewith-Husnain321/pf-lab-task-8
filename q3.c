#include <stdio.h>

int main()
{
    int arr[5] = {4, 9, 2, 7, 5};

    int *p = arr;

    int sum = 0;
    int largest = *p;

    for(int i = 0; i < 5; i++)
    {
        sum = sum + *p;

        if(*p > largest)
        {
            largest = *p;
        }

        p++;
    }

    printf("Sum = %d\n", sum);
    printf("Largest = %d\n", largest);

    return 0;
}