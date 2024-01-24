#include <stdio.h>

double power(double base, int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return base*power(base,n-1);
    }
}

void main() {
    double base;
    int expo;
    printf("Please enter the base: ");
    scanf("%lf",&base);
    printf("Please enter a non-negative integer exponent: ");
    scanf("%d",&expo);
    printf("%lf raised to the power %d is %lf\n",base,expo,power(base,expo));
}

