#include <stdio.h>
#include <stdlib.h>

struct money money_init(int dollars, int cents);

struct money money_add(struct money a, struct money b);

struct money money_input(void);

void money_print(struct money m);

struct money{

	int dollars;
	int cents;
};

int main(void)
{
	struct money a, b, c;
	a = money_init(3,10);
	b = money_input();
	c = money_add(a, b);
	money_print(c);
}


struct money money_init(int dollars, int cents){

	struct money s = {dollars, cents};
	if (s.cents >= 100){
		s.dollars +=  s.cents / 100;
		s.cents %= 100;
	}
	return s;
		
}

struct money money_add(struct money a, struct money b){
	return money_init(a.dollars + b.dollars, a.cents + b.cents);
}

struct money money_input(void){
	char buf[32];

	printf("Dollar amount: ");
	fgets(buf, sizeof(buf), stdin);
	int dollars = strtol(buf, NULL, 10);

	printf("cent amount: ");
	fgets(buf, sizeof(buf), stdin);
	int cents = strtol(buf, NULL, 10);	

	return money_init(dollars, cents);
}

void money_print(struct money m){
	printf("$%d.%02d ", m.dollars, m.cents);
}
