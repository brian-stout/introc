#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        //Should print to error
        printf("Usage: %s <value>\n", argv[0]);
        //Should return error code
        return 1;
    }

    printf("%s\n", argv[1]);
}
