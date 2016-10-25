
#include "deck.h"
#include <string.h>
#include <stdio.h>

struct deck deck_create(void)
{
	struct deck d;
	d.card_amt = 0;
	for(int s = 0; s < 4; ++s) {
		for(int rank = 2; rank < 15; ++rank) {
			size_t i = s*13 + (rank - 2);
			++d.card_amt;
			switch(s) {
				case 0:
					strncpy(d.cards[i].suit, "Clubs", sizeof(d.cards[i].suit));
					break;
				case 1:
					strncpy(d.cards[i].suit, "Diamonds", sizeof(d.cards[i].suit));
					break;
				case 2:
					strncpy(d.cards[i].suit, "Hearts", sizeof(d.cards[i].suit));
					break;
				case 3:
					strncpy(d.cards[i].suit, "Spades", sizeof(d.cards[i].suit));
					break;
			}
			
			d.cards[i].rank = rank;
		}
	}

	return d;
}

int deck_deal(struct deck d, struct card hand[], int amount){
	for(int i = 0; i < amount; ++i){
		if (d.card_amt > 0){
			hand[i].rank = d.cards[d.card_amt-1].rank;
			strncpy(hand[i].suit, d.cards[i].suit, sizeof(d.cards[i].suit));
			--d.card_amt;
			printf("Deck has %d cards.\n", d.card_amt);
		}
		else{
			printf("Deck is empty\n");
		}
	}
	return d.card_amt;
}


