#include <stdio.h>
#include <string.h>
#include <math.h>

void happyBirthday(char name[], int age){
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s", name);
    printf("\nHappy Birthday to you!");
    printf("\nYou are %d years old", age);
}


int main(){

    char name[] = "Allison";
    int age = 29;

    happyBirthday(name, age);

}