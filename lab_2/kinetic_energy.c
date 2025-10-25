#include <stdio.h>

int main()
 {
    double m, v, ke;

    printf("Enter the mass (kg): ");
    scanf("%lf", &m);

    printf("Enter the velocity (m/s): ");
    scanf("%lf", &v);

    ke = 0.5 * m * v * v;

    printf("The kinetic energy is: %.2lf Joules\n", ke);

    return 0;
}
