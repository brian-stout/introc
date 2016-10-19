#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        //Should print to error
        printf("Usage: %s <value>\n", argv[0]);
        //Should return error code
        return 1;
    }

    printf("%s\n", argv[1]);
    //Adding 5 to the argv array prints out the value at position 6 until null
    //printf("%s\n", argv[1] + 5);

    printf("%ld\n", 5 + strtol(argv[1], NULL, 10));

    char input[5];

    fgets(input, sizeof(input), stdin);

    printf("%s\n", input);
}
