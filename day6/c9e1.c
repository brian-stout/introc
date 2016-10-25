#include <stdio.h>

struct money init(int dollars, int cents);

struct money add(struct money a, struct money b);

struct money{

	int dollars;
	int cents;
};

int main(void)
{
	struct money a, b, c;
	a = init(13,312);
	b = init(5,642);
	c = add(a, b);
	printf("$%d.%d\n", c.dollars, c.cents);
}


struct money init(int dollars, int cents){

	struct money s;
	s.dollars = dollars;
	s.cents = cents;
	return s;
		
}

struct money add(struct money a, struct money b){

	struct money c;
	c.dollars = a.dollars + b.dollars;
	c.cents = a.cents + c.cents;
	if (c.cents >= 100){
		c.dollars += (c.cents/100);
		//Finds how many multiples of 100 there are, then multiplies it again
		//To get an even number to subtract to get the remainder
		c.cents -= (c.cents/100*100);
	}
	return c;
}
