#include <stdio.h>

//simple printing
/*int main(){
    printf("Hello Benjamin");
    return 0;
}*/

//printing out the digits
/*int main(){
    int age = 20;
    float height = 1.80;

    printf("Age:%d", age);
    printf("\nHeight:%f", height);
}*/

/*int main(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You entered:%d", age);
}*/

int main(){
    char sentence[100];
    printf("Enter full sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("This is your full sentence: %s", sentence);
}


