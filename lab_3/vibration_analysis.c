#include <stdio.h>

int main()
 {
    float amplitude, frequency;
    
    printf("Enter vibration amplitude (mm): ");
    scanf("%f", &amplitude);

    printf("Enter vibration frequency (Hz): ");
    scanf("%f", &frequency);

    if ((amplitude > 0.5) && (frequency >= 20 && frequency <= 50)) {
        printf("Risk Level: High Risk");
    }
    else if ((amplitude > 0.5) || (frequency > 60)) {
        printf("Risk Level: Medium Risk");
    }
    else {
        printf("Risk Level: Low Risk");
    }

    return 0;
}
