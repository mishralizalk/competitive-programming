#include <stdio.h>

int main() {
    int n, i;
    float attendance[100];
    float threshold;
    int below = 0;
    int lowest_position = 0;
    float sum = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter attendance percentages:\n");

    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &attendance[i]);
    }

    printf("Enter attendance threshold: ");
    scanf("%f", &threshold);

    for (i = 0; i < n; i++) {

        if (attendance[i] < threshold) {
            below++;
        }

        if (attendance[i] < attendance[lowest_position]) {
            lowest_position = i;
        }

        sum = sum + attendance[i];
    }

    average = sum / n;

    printf("\n--- Attendance Analysis ---\n");
    printf("Students below threshold: %d\n", below);
    printf("Lowest attendance: %.2f%%\n", attendance[lowest_position]);
    printf("Position of lowest attendance: %d\n", lowest_position + 1);
    printf("Average attendance: %.2f%%\n", average);

    return 0;
}
