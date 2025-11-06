#include <stdio.h>
/*void change_value(int nb);
int main(){
    int nb = 42;
    change_value(nb);
    printf("%d", nb);
    
}

void change_value(int nb){
    nb = 1334;
}*/

//Pass by reference

void change(int *x){
    *x = 99;

}
int main(){
    int num = 42;
    change(&num);
    printf("%d", num);
}

