#include <stdio.h>
#include <string.h>
#include <ctype.h>


int caseInsensitiveCompare(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (tolower(str1[i]) != tolower(str2[i])) {
            return 0;   // Not same
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;       // Same
    }

    return 0;
}

int main() {
    int n, i;
    char names[100][50];
    char searchName[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

  
    printf("Enter student names:\n");

    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    
    printf("\nEnter name to search: ");
    scanf("%s", searchName);

    
    printf("\n--- Case-Sensitive Search ---\n");

    int found = 0;

    for (i = 0; i < n; i++) {
        if (strcmp(names[i], searchName) == 0) {
            printf("Student found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Student not found\n");
    }

    
    printf("\n--- Case-Insensitive Search ---\n");

    found = 0;

    for (i = 0; i < n; i++) {
        if (caseInsensitiveCompare(names[i], searchName)) {
            printf("Student found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Student not found\n");
    }

    return 0;
}
