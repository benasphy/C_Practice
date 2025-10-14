/*
#include <stdio.h>

int main(){

    int c;

    c = getchar();

    while (c != EOF){
        putchar(c);
        c = getchar();
    }
} */

// MOdified version of the above

#include <stdio.h>

int main(){
    int c;

    while((c=getchar()) != EOF){
        putchar(c);
    }
}