#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c; // Quadratic equation coefficients
    float disc; // Discriminant

    printf("Program to solve a quadratic equation in form of ax^2+bx+c=0 \n");
    printf("Enter the a coefficient \n");
    scanf("%f", &a);
    printf("Enter the b coefficient \n");
    scanf("%f", &b);
    printf("Enter the c coefficient \n");
    scanf("%f", &c);
    disc= b*b-4*a*c;

    if(disc>=0){
        printf("The root x1 is: %0.3f \n", (-b+sqrt(disc))/(2*a));
        printf("The root x2 is: %0.3f \n", (-b-sqrt(disc))/(2*a));
    }
    else{
        if(a>0){
            printf("The complex root x1 is: %0.2f + %0.3f i\n", -b/(2*a),sqrt(abs(disc))/(2*a));
            printf("The complex root x2 is: %0.2f - %0.3f i\n", -b/(2*a),sqrt(abs(disc))/(2*a));
        }
        else{
            printf("The complex root x1 is: %0.2f - %0.3f i\n", -b/(2*a),-sqrt(abs(disc))/(2*a));
            printf("The complex root x2 is: %0.2f + %0.3f i\n", -b/(2*a),-sqrt(abs(disc))/(2*a));
        }
    }
    return 0;
}