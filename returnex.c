#include <stdio.h>
#include <math.h>
#include <string.h>

int square(int num){
    int result = num * num;
    return result;
}

int main(){
    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    return 0;
}