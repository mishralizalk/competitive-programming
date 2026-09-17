#include <stdio.h>

int main() {
    int n, i;
    int patients[100];
    int max, min, max_hour;
    int sum = 0;
    float average;
    int above_average = 0;

  
    printf("Enter number of hours: ");
    scanf("%d", &n);

    
    printf("Enter number of patients for each hour:\n");

    for (i = 0; i < n; i++) {
        printf("Hour %d: ", i + 1);
        scanf("%d", &patients[i]);
    }

    
    max = patients[0];
    min = patients[0];
    max_hour = 1;

    
    for (i = 0; i < n; i++) {

        if (patients[i] > max) {
            max = patients[i];
            max_hour = i + 1;
        }

        if (patients[i] < min) {
            min = patients[i];
        }

        sum = sum + patients[i];
    }

    
    average = (float)sum / n;

    
    for (i = 0; i < n; i++) {
        if (patients[i] > average) {
            above_average++;
        }
    }

    
    printf("\n--- Hospital Emergency Monitoring ---\n");

    printf("Maximum patients: %d\n", max);
    printf("Hour when maximum occurred: Hour %d\n", max_hour);

    printf("Minimum patients: %d\n", min);

    printf("Peak hour: Hour %d\n", max_hour);

    printf("Average patients: %.2f\n", average);

    printf("Hours above average: %d\n", above_average);

    return 0;
}
