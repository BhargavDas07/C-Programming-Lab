#include <stdio.h>

int main() {
    double tensile1, tensile2;

    printf("Enter the tensile strength of the first material (in MPa): ");
    scanf("%lf", &tensile1);

    printf("Enter the tensile strength of the second material (in MPa): ");
    scanf("%lf", &tensile2);

    if (tensile1 > tensile2) {
        printf("The first material has a higher tensile strength: %.2lf MPa\n", tensile1);
    } 
    else if (tensile2 > tensile1) {
        printf("The second material has a higher tensile strength: %.2lf MPa\n", tensile2);
    } 
    else {
        printf("Both materials have the same tensile strength: %.2lf MPa\n", tensile1);
    }

    return 0;
}
