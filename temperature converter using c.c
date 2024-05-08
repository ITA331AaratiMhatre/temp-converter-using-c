#include <stdio.h>

// Function to convert temperature from Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert temperature from Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float temperature;
    int choice;

    printf("Temperature Conversion\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            printf("%.2f Fahrenheit is %.2f Celsius.\n", temperature, fahrenheitToCelsius(temperature));
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            printf("%.2f Celsius is %.2f Fahrenheit.\n", temperature, celsiusToFahrenheit(temperature));
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
