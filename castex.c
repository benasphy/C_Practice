#include <stdio.h>

float add(int x, int y);
int main(){
    int num1, num2;
    int x, y;
    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    float result = add(num1, num2);
    
    printf("The result is: %.1f", result);
}

float add(int x, int y){

    return (float)(x+y);
}