#include <stdio.h>

int main() {
    float height, weight;
    char phone[20];   // use a string to hold phone number (in case it starts with 0 or is long)

    // Input height
    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    // Input phone number
    printf("Enter your phone number: ");
    scanf("%s", phone);

    // Input weight
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    // Display the results
    printf("\n--- User Information ---\n");
    printf("Height: %.2f cm\n", height);
    printf("Phone Number: %s\n", phone);
    printf("Weight: %.2f kg\n", weight);

    return 0;
}
