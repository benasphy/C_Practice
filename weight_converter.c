#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    float kilogram;
    float pound;
    int choice;
    float kgtopd;
    float pdtokg;

    printf("Weight Conversion \n");
    printf("1. Kilogram to Pound\n");
    printf("2. POund to kilogram\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    
    if (choice == 1){
        printf("Enter the weight in kilogram: ");
        scanf("%f", &kilogram);
        kgtopd = 2.2 * kilogram;
        printf("Your weight in pound will be %.2f", kgtopd);

    }
    else{
        printf("Enter the weight in pound: ");
        scanf("%f", &pound);
        pdtokg = 0.45 * pound;
        printf("Your weight in kilogram would be %.2f", pdtokg);
    }
    
}