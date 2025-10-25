#include <stdio.h>

int main() {
    double temperature;

    printf("Enter the current temperature of the machine (C): ");
    scanf("%lf", &temperature);

    if (temperature >= 60 && temperature <= 82) {
        printf("Temperature is safe");
    } else {
        printf("Temperature warning");
    }

    return 0;
}
