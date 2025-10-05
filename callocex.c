#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;

    printf("Enter the Number of Scores: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    for (int i = 0; i < number; i++){

        printf("%d", scores[i]);
    }

    free(scores);
    scores = NULL;
}