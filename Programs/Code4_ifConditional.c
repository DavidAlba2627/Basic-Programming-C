#include <stdio.h>
int main()
{
    int x;
    printf("Introduce an integer number\n");
    scanf("%d",&x);
    
    if(x%2){
        printf("The number is even\n");
    }
    
    else{
        printf("The number is odd\n");
    }

    return 0;
}