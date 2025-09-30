#include <stdio.h>
#include <string.h>

int main(){

    int numbers[] = {10, 20, 30, 40};
    char grade[] = {'A', 'B', 'C', 'D'};

    for(int i = 0; i < 5; i++){
        printf("%c ", grade[i]);

    }
    printf("\n%d", numbers[0:]);
    return 0;
}