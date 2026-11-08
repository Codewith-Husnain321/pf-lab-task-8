#include <stdio.h>

int divide(int a, int b, int *result)
{
    if(result == NULL)
    {
        return -1;
    }

    if(b == 0)
    {
        return -1;
    }

    *result = a / b;

    return 0;
}

int main()
{
    int result;
    int status;

    // Case 1: Successful division
    status = divide(20, 5, &result);

    if(status == 0)
    {
        printf("Division result = %d\n", result);
    }
    else
    {
        printf("Division failed\n");
    }

    // Case 2: Division by zero
    status = divide(20, 0, &result);

    if(status == 0)
    {
        printf("Division result = %d\n", result);
    }
    else
    {
        printf("Division failed: Invalid divisor\n");
    }

    // Case 3: NULL pointer
    status = divide(20, 5, NULL);

    if(status == 0)
    {
        printf("Division result = %d\n", result);
    }
    else
    {
        printf("Division failed: NULL pointer\n");
    }

    return 0;
}