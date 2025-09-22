#include<stdio.h>
#include<string.h>

int main() {
    char item[30];
    float price;
    int amount;
    float total;

    printf("What Item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';


    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &amount);
    total = amount * price;

    /*printf("%s\n", item);
    printf("%.3f\n", price);
    printf("%d\n", amount);
    return 0; */

    printf("You have bought %d %s\n", amount, item);
    printf("The total is: %.3f\n", total);



}