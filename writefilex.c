#include <stdio.h>

int main(){

    FILE *pFile = fopen("Output.txt", "w");

    char text[] = "Hello world";

    fprintf(pFile, "%s", text);

    fclose(pFile);
}