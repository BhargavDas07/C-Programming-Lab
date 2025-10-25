#include <stdio.h>

int main() {
    float m, a, force;

    printf("Enter the mass (in kg): ");
    scanf("%f", &m);
    printf("Enter the acceleration (in m/s^2): ");
    scanf("%f", &a);

    force = m * a;

    printf("The force is: %.2f N\n", force);

    return 0;
}
