#include <stdio.h>

typedef struct {
    int data[1000];
} Big;

// Pass by value (makes a copy of the whole struct)
void by_value(Big b) {
    printf("Inside by_value: first = %d\n", b.data[0]);
}

// Pass by pointer (only passes address)
void by_pointer(Big *b) {
    printf("Inside by_pointer: first = %d\n", b->data[0]);
    b->data[0] = 999;
}

int main() {
    Big big;
    big.data[0] = 42;

    printf("Size of Big struct = %lu bytes\n", sizeof(Big));
    printf("Size of pointer = %lu bytes\n\n", sizeof(Big*));

    by_value(big);      // will copy 1000 ints (~4000 bytes if int=4)
    by_pointer(&big);   // only passes 8 bytes (on 64-bit machine)

    printf("Back in main: first = %d\n", big.data[0]);
    return 0;
}
