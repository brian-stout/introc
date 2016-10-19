#include <stdio.h>
#include <stdlib.h>

size_t array_length(int array[]);

int main(void)
{

    int grades = {75, 100, 30, 40};

    printf("Number of elements is %zd\n", array_length(grades));

}

size_t array_length(int array[])
{
    return sizeof(array) / sizeof(array[0]);
}
