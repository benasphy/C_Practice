#include <stdio.h>
#include <string.h>

int main(){
    int age[] = {10, 20, 30};
    char grade[] = {'A', 'B', 'C', 'D'};

    for (int i = 0; i < 5; i++){
        printf("%c", grade[i]);
    }

    printf("%d", age[0]);
    return 0;
}