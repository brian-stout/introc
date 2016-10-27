#include <stdio.h>

int main(void)
{
	for(int i = 0; i <= 50; ++i){
		if(i % 15 == 0){
			printf("Fizzbuzz\n");
		}
		else if(i % 3 == 0){
			printf("Fizz\n");
		}
		else if(i % 5 == 0){
			printf("buzz\n");
		}
		else{
			printf("%d\n", i);
		}
	}


}
