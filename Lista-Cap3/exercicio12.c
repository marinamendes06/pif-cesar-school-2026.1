#include <stdio.h>

int main() {
    printf("-----------------------------------\n");
    printf("  Celsius    Fahrenheit     Kelvin \n");
    printf("-----------------------------------\n");
  
    for (int C = 0; C <= 100; C += 5) {
        float F = (9.0 * C) / 5.0 + 32.0;
        float K = C + 273.15;
      
        printf("%8.2f C %12.2f F %10.2f K\n", (float)C, F, K);
    }

    printf("-----------------------------------\n");

    return 0;
}
