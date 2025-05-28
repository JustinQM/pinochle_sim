#include <stdio.h>
#include "pinochle.h"

int main(void)
{
    Card* deck = deck_generate();

    printf("Deck is %p\n",deck);
    for(int i = 0; i < TOTAL_CARDS; i++)
    {
        card_print(&deck[i]);
    }

    return 0;    
}
