#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    if(argc > 2){
        printf("Usage: %s <number> \n", argv[0]);
        return 1;
    }

	int number = strtol(argv[1], NULL, 10);
	int sum = number;

	printf("%d", number);
	while (number > 1){
		--number;
		printf(" X %d", number);
		sum = sum * number;
	}
	printf(" is equal to %d\n", sum);

}
