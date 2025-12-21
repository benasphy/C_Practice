#include <stdio.h>
#include <string.h>

int main(){

    int age;
    float gpa;
    char name[50];

    printf("What is your name?");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("How old are you? ");
    scanf("%d", &age);

    printf("What is ur GPA?");
    scanf("%f", &gpa);


    
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    
    return 0;
}