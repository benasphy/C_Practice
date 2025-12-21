#include <stdio.h>
//Pass by value
/*void increment(int x){
    x = x + 1;
    printf("Inside increment, x = %d\n", x);
}

int main(){
    int a = 5;
    increment(a);
    printf("%d", a);
}*/

//Pass by reference using pointers since c does not have real pass by reference

void increment(int *x){
    *x = *x + 1;
    printf("Incremented value, x = %d\n", *x);

}

int main(){
    int a = 5;
    increment(&a);
    printf("%d\n", a);
}