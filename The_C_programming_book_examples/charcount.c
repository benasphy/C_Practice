/*
#include <stdio.h>

int main(){

    long nc;
    nc = 0;

    while (getchar() != EOF){
        ++nc;
        printf("%ld\n", nc);

    }
    return 0;
}*/

//Let us use for lop instead

#include <stdio.h>

int main(){


    for (long nc = 0; getchar() != EOF; ++nc){
        printf("%ld\n", nc);
    }
}