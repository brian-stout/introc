#include <stdio.h>

int main(void)
{
    for (int i = 20; i <=60; ++i){
        if ((i % 2) == 0){
            printf("%d  %d   %d\n", i, (i*i),(i*i*i));
            } 
        }
}
