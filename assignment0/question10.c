#include <stdio.h>

int main() {
    int s1 = 80, s2 = 75, s3 = 90, s4 = 85, s5 = 95;

    int total = s1 + s2 + s3 + s4 + s5;
    float percentage = (total / 500.0) * 100;

    printf("Total Marks = %d\nPercentage = %.2f%%", total, percentage);
    return 0;
}
