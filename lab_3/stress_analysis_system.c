#include <stdio.h>

int main() {
    double applied_stress, yield_strength, fos;

    printf("Enter the applied stress (MPa): ");
    scanf("%lf", &applied_stress);

    printf("Enter the material yield strength (MPa): ");
    scanf("%lf", &yield_strength);

    fos = yield_strength / applied_stress;

    printf("\nFactor of Safety (FOS) = %.2lf\n", fos);

    if (fos >= 2.0) {
        printf("Design Status: Safe Design");
    } 
    else if (fos > 1.5 && fos < 2.0) {
        printf("Design Status: Acceptable with monitoring");
    } 
    else if (fos < 1.5) {
        printf("Design Status: Danger - redesign needed");
    }

    return 0;
}
