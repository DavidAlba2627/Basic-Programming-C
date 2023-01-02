#include <stdio.h>
int main()
{
    int num_dia;
    printf("Enter a weekday number\n");
    scanf("%d",&num_dia);

    switch(num_dia)
    {
        case 1:
            printf("The first day is Monday \n");
            break;
        case 2:
            printf("The second day is Tuesday \n");
            break;
        case 3:
            printf("The third day is Wednesday  \n");
            break;
        case 4:
            printf("The fourth day is Thursday \n");
            break;
        case 5:
            printf("The fifth day is Friday  \n");
            break;
        case 6:
            printf("The sixth day is Saturday \n");
            break;
        case 7:
            printf("The seventh day is Sunday \n");
            break;
        default:
            printf("Invalid numnber \nEnter a number from 1 to 7");
    }
    return 0;
}