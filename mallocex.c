#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;

    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if (grades == NULL){
        printf("Memory allocation Failed");
        return 1;
    }


    for (int i = 0; i < number; i++){
        printf("%d", grades[i]);
    }



    free(grades);
    grades = NULL; //avoids dangling pointer
}