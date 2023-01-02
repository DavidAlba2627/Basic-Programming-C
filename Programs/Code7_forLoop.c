#include <stdio.h>
int main()
{
    int n = 50, sum = 0.0, i;
    printf("The sumatory of consecutive numbers from 1 to %d is: %d \n\n",n,(n*(n+1))/2);
    printf("Sum verification by manual form: \n");
    printf(" iteration \t sumatory \n");
    
    for(i = 0; i<= n; i++){
        sum = sum + i;
        printf(" %d \t\t %d  \n",i,sum);
    }
    
    printf("\nThe result of sum is: %d \n",sum);
    return 0;
}