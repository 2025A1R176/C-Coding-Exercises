#include <stdio.h>

int main() {
    float marks;

    printf("Enter your marks (0-100): ");
    scanf("%f", &marks);

    if (marks > 75) {
        printf("Grade: A\n");
    }
    else if (marks >= 65 && marks <= 74) {
        printf("Grade: B\n");
    }
    else if (marks >= 55 && marks <= 64) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: FAIL\n");
    }

    return 0;
}
