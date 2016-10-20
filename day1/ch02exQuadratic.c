#include <stdio.h>
#include <math.h>

double quadpos(double a, double b, double c);
double quadneg(double a, double b, double c);

int main(void)
{
    double a = 1, b = 2, c = -8;
    double r1, r2;

    r1 = quadpos(a, b, c);
    r2 = quadneg(a, b, c);
    printf("x=%lf; x=%lf", r1, r2);


}

double quadpos(double a, double b, double c)
{
    double result;

    result = ((-b + sqrt((b*b) - 4*(a*c))) / (2*a));
    return(result);

}

double quadneg(double a, double b, double c)
{
    double result;

    result = ((-b - sqrt((b*b) - 4*(a*c))) / (2*a));
    return(result);

}
