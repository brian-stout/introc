#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 1; i <= 100; ++i){
        if ((i % 5) == 0){
            sum += i;
        }
    }

    printf("The sum is %d \n", sum);
}
