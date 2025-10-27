#include <stdio.h>

void swap(int *px, int *py);
int main(){
    int a = 10, b=5;
    swap(&a, &b);
    printf("value of a after swap: %d", a);
    printf("\nValue of b after swap: %d", b);
}

void swap(int *px, int *py){
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}