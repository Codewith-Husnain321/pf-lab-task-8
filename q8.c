#include <stdio.h>
#include <string.h>

int main()
{
    char subjects[5][100];

    int longestIndex = 0;

    // Input subjects
    for(int i = 0; i < 5; i++)
    {
        printf("Enter subject %d: ", i + 1);

        fgets(subjects[i], sizeof(subjects[i]), stdin);

        // Remove newline
        subjects[i][strcspn(subjects[i], "\n")] = '\0';
    }

    // Print numbered list
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, subjects[i]);
    }

    // Find longest subject
    for(int i = 1; i < 5; i++)
    {
        if(strlen(subjects[i]) > strlen(subjects[longestIndex]))
        {
            longestIndex = i;
        }
    }

    printf("Longest subject: %s\n", subjects[longestIndex]);

    return 0;
}