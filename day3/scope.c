#include <stdio.h>

const int WARMING = 76;

int iterator(void);

int main(void)
{
    int value = iterator();
    printf("%d\n", value);

    value = iterator();
    printf("%d\n", value);

    value = iterator();
    printf("%d\n", value);

    int warming = WARMING;
    printf("WARMING: %d\n", warming);
}

int iterator(void)
{
    static int x;  //Still only visible to the function, just persistent

    int value = WARMING;
    printf("WARMING: %d\n", value);
    x +=1;
    
    return x;
}
