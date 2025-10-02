#include <stdio.h>
#include <stdbool.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

int main(){

    Student student1 = {"Alex", 30, 3.5, true};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%f\n", student1.gpa);
    printf("%s\n", student1.isFullTime ? "Yes" : "No");
    return 0;

}