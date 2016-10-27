#include <stdio.h>

int main()
{
	double radius = 5.789;

	double *rad_ptr = &radius;

	printf("&radius = %p\n", (void *)&radius);
	printf("rad_ptr = %p\n", (void *)rad_ptr);

	printf("radius  = %lf\n", radius);
	printf("*rad_ptr= %lf\n", *rad_ptr);

}
