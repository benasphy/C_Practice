#include <stdio.h>
#include <string.h>

int main(){

    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0){
        printf("Enter your name it shouldn't be zero!");
        fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    }
    printf("Hello %s", name);
    return 0;
}