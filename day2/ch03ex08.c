#include <stdio.h>

int main(void)
{
    int i = 7;
    int n = 1;
    
    while (i > 0){
            while (n <= i){
                printf("%d ", n);
                ++n;
                }
            n = 1;
            --i;
            printf("\n");
        }

}
