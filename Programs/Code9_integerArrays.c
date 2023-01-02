#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sort_num[11] = {0,1,2,3,4,5,6,7,8,9,10};
    int rand_num[15];
    
    for(int i=0; i<15; i++)
    {
        rand_num[i] = rand() % 16; // Generates a random number from 0 to 15
    }
    
    printf("The sorted array is:\n");
    for(int i=0; i<11; i++)
    {
        printf("%d, ",sort_num[i]);
    }
    
    printf("\n\nThe random array is:\n");
    for(int i=0; i<15; i++)
    {
        printf("%d, ",rand_num[i]);
    }
    
    long long_rand = sizeof(rand_num)/sizeof(int); 
    long long_sort = sizeof(sort_num)/sizeof(int);
    printf("\n\nRandom array has %lu elements\nSorted array has %lu elements", long_rand, long_sort);
    return 0;
}
