#include <stdio.h>

typedef enum {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}Day;

int main(){

    Day today = THURSDAY;

    printf("%d", today);
    return 0;
}