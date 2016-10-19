#include <stdio.h>

int main(void)
{
    for (int i = 1; i < 8; ++i){
        for (int n = i ;n > 0; --n){
            printf("%d ", n);
        }
        printf("\n");
    }
}
