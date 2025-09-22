#include <stdio.h>
#include <math.h>

int main(){

    double radius;
    double area;
    double surfaceArea;
    double volume;
    const double pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);
    surfaceArea = 4 * pi * pow(radius, 2);
    volume = (4.0/3.0) * pi * pow(radius, 3);


    printf("Area: %.3lf\n", area);
    printf("Surface Area: %.3lf\n", surfaceArea);
    printf("Volume: %.3lf\n", volume);

    
}