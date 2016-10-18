#include <stdio.h>

int sum_of_squares(int a, int b);

int main(void)
{
    int a = 5, b = 6, c;

    c = sum_of_squares(a, b);
    printf("%d\n", c);
}

int sum_of_squares(int a, int b)
{
    return(a * a + b * b);
}
