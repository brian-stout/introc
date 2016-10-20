#include <stdio.h>

int main(void)
{
    char name[64];   

    printf("Please enter your name:  "); 

    fgets(name, sizeof(name), stdin);

    printf("%s\n", name);
}
