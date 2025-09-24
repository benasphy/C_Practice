#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main(){

    float price = 10.00;
    bool isStudent = false;
    bool isSenior = true;

    if (isStudent){
        if (isSenior){
            printf("Your discount is 30%%\n");
            price *= 0.7;

        }
        else{
            printf("Your discount is 10%%\n");
            price *= 0.9;
        }
    }
    else{
        printf("Your discount is 20%%\n");
        price *= 0.8;
    }

    printf("Your price for a ticket is %.2f", price);
}