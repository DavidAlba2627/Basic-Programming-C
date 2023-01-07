#include <stdio.h>
#include <math.h>

float squareRoot(float);

float squareRoot(float x)
{
    float b,y;
    b = x;
    while (b!=y)
    {
        y=b;
        b=0.5*(x/b + b);
    }
    return b;
}

int main()
{
    float x,b,y=0;
    printf("This program calculates the square root using babilonic algorithm\n");
    printf("Enter the number to calculate its root\n");
    scanf("%f", &x);

    if(x>=0){
        printf("The root is %0.4f", squareRoot(x));
    }
    if(x<0){
        x = fabs(x);
        printf("The imaginary root is %0.4f i", squareRoot(x));
    }
    
    return 0;
}