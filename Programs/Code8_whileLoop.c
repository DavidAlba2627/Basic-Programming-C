#include <stdio.h>
#include <math.h>
int main()
{
    float x,b,y=0;
    printf("This program calculates the square root using babilonic algorithm\n");
    printf("Enter the number to calculate its root\n");
    scanf("%f", &x);

    if(x>=0){
        b = x;
        while (b!=y)
        {
            y=b;
            b=0.5*(x/b + b);
        }
        printf("The root is %0.4f", b);
    }
    if(x<0){
        x = fabs(x);
        b = x;
        while (b!=y)
        {
            y=b;
            b=0.5*(x/b + b);
        }
        printf("The imaginary root is %0.4f i", b);
    }

    return 0;
}
