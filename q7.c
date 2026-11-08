#include <stdio.h>
#include <string.h>

int main()
{
    char secretCode[] = "nu2026";
    char enteredCode[50];

    printf("Enter code: ");
    fgets(enteredCode, sizeof(enteredCode), stdin);

    // Remove newline
    enteredCode[strcspn(enteredCode, "\n")] = '\0';

    // Full comparison
    if(strcmp(enteredCode, secretCode) == 0)
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied\n");
    }

    // Check whether code starts with "nu"
    if(strncmp(enteredCode, "nu", 2) == 0)
    {
        printf("Code starts with \"nu\": Yes\n");
    }
    else
    {
        printf("Code starts with \"nu\": No\n");
    }

    return 0;
}