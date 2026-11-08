#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[50];
    char rollNumber[20];
    char username[80];

    printf("Enter first name: ");
    fgets(firstName, sizeof(firstName), stdin);

    printf("Enter roll number: ");
    fgets(rollNumber, sizeof(rollNumber), stdin);

    // Remove newline characters
    firstName[strcspn(firstName, "\n")] = '\0';
    rollNumber[strcspn(rollNumber, "\n")] = '\0';

    // Create username
    strcpy(username, firstName);

    strcat(username, "_");

    strcat(username, rollNumber);

    printf("Username: %s\n", username);

    printf("Length: %zu\n", strlen(username));

    return 0;
}