#include <stdio.h>

void birthday(int* age);

int main(){

    int age = 25;
    int *page = &age;
    birthday(page);
    // printf("%p\n", &age);
    // printf("%p\n", &*page);

    printf("You are %d years old", age);

}

void birthday(int* age){
    (*age)++;
}

