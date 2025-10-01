#include <stdio.h>
#include <stdbool.h>

int main(){

    int number = 8;

    printf("%d is %s", number, (number % 2 == 0) ? "Even": "Odd");

    return 0;
}