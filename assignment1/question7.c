#include <stdio.h>

int main() {
    float basic = 4500;   
    float da, ta, hra, total;

    if (basic <= 5000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;

    printf("Basic Salary: %.2f\n", basic);
    printf("Total Salary: %.2f\n", total);

   
}
