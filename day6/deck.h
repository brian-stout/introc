#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

#include "card.h"

struct deck {
	struct card cards[52];
	int card_amt;
};




struct deck deck_create(void);

void deck_shuffle(struct deck d);

int deck_deal(struct deck d, struct card hand[], int amount);

#endif
