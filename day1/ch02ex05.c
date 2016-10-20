#include <stdio.h>
#include <math.h>

int is_right(int side1, int side2, int side3);

int main(void)
{
    int side1 = 3, side2 = 4, side3 = 5;
    
    printf("%d, %d, and %d are ", side1, side2, side3);

    if(is_right(side1, side2, side3) == 0)
    {
        printf("NOT ");
    }
    
    printf("the sides of a right triangle\n");

}

int is_right(int side1, int side2, int side3)
{
    if(sqrt(side1*side1+side2*side2) == side3)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
