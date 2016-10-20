#include <stdio.h>
#include <math.h>

    
int main(void)
{

    double a = 3, b = 4, c = -1, result1, result2;
    printf("The solution to %lfx^2 + %lfx + (%lf) = 0 is ", a, b, c);
    result1 = (((-b) + (sqrt(((b*b) - 4 * (a * c))))) / (2 * a));
    result2 = (((-b) - (sqrt(((b*b) - 4 * (a * c))))) / (2 * a));
    printf("x = %lf; x = %lf \n", result1, result2);
}
