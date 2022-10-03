#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b;
    float c;
    a= 5;
    b= 10;
    c= -2;
    int d = 6;
    printf("a + b = %d \n", a+b); // Adding variables
    printf("a - b = %d \n", a-b); // Subtracting variables
    printf("a * c = %0.2f \n", a*c); // Multiplying variables
    printf("b / a = %d \n", b/a); // Dividing variables
    printf("a / b = %0.2f \n", 1.0*a/b);  // The fraction is multiplied by 1.0 to change it into float
    printf("a mod d = %d \n", a%d); //  Obtaining the mod of the division
    printf("b^d = %f \n", pow(b,d)); // Obtaining power operation: b^d
    return 0;
}
