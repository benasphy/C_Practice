#include <stdio.h>

int main(){
    int age;
    float gpa;
    char grade;
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("enter your gpa: ");
    scanf("%.1f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);


    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
}