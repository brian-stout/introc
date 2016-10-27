#include <stdio.h>

int main(void)
{
	int number = 5000;
	for(int n=1; n < (number / 2); ++n){
		int sum = 0;
		for(int m = n; sum < number; ++m){
			sum += m;
		}
		if((sum == number) && (n != number)){
				printf("%d ", n);
				sum -= n;
			for(int m = n + 1; sum > 0; sum-=m){
				printf("+ %d ", m);
				++m;			
			}
		printf("is equal to %d\n\n", number);
		}
	}
}
