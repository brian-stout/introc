#include <stdio.h>


int isalpha(char string[128]);

int main(void)
{
	char mystring[128] = {"hello13431"};
	if(isalpha(mystring)){
		printf("Is alpha \n");
	}
	else{
		printf("Is not alpha \n");
	}
}

int isalpha(char string[128])
{
	for(int i = 0; string[i] != '\0'; ++i){
		if((string[i] < 65) && (string[i] > 122)){
			return 0;
		}
	}
	return 1;
}
