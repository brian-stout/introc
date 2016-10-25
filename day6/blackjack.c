
#include <stdio.h>
#include <string.h>

#include "card.h"
#include "deck.h"

int main(void)
{
	struct deck pile = deck_create();
	char buf[18];




	for(int n = 0; n < pile.card_amt; ++n) {
		card_format(buf, sizeof(buf), pile.cards[n]);

		puts(buf);
	}
	printf("Deck pile has %d cards in it.\n", pile.card_amt);
	

	struct card hand[258];
	pile.card_amt = deck_deal(pile, hand, 6);
	card_format(buf, sizeof(buf), hand[0]);
	for(int i = 0; i < 6; ++i){
		card_format(buf, sizeof(buf), hand[i]);
		puts(buf);
	}

	printf("Deck pile has %d cards in it.\n", pile.card_amt);

}
