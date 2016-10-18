#include <stdio.h>

int main(void)
{
    int grades[] = { 85, 85, 4, 95, 75, 85, 100, 70, 75};
    int absents[] = { 1, 1, 9, 2, 0, 3, 4, 1, 0, 3};

    printf("grades[4] = %d\n", grades[4]);
    printf("absents[1] = %d\n", absents[1]);

    printf("Calling a bad index to see what gets retured. \n");
    printf("grades[9] = %d\n", grades[15]);
}  
