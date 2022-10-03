#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x, y, x2, y2;
    printf("Introduce a flot number x\n");
    scanf("%f",&x); //scanf es para que el programa te pida o tu le metas un numero o variable
    printf("Introduce a flot number y\n");
    scanf("%f",&y);
    printf("Introduce a flot number x2\n");
    scanf("%f",&x2);
    printf("Introduce a flot number y2\n");
    scanf("%f",&y2);
    printf("The result of (x + 3y)^2 is: %0.3f \n",pow(x+3*y,2));
    printf("The result of (x^2 + y^2)^1/2 is: %0.3f \n",sqrt(pow(x,2)+pow(y,2)));
    printf("EThe result of (y2-y1)/(x2-x1) is: %0.3f \n",(y2-y)/(x2-x));
    printf("The result of sin(x) + e^y is: %0.3f \n", sin(x) + exp(y));
    printf("The result of ln(x) - tan^-1(y) is: %0.3f \n ", log(x) - atan(y));
    return 0;

}
