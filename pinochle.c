#include "pinochle.h"

#include <stdio.h>
#include <stdlib.h>

//Pretty prints the card argument
void card_print(const Card* card)
{
    switch(card->value)
    {
        case NINE: printf("NINE"); break;
        case TEN: printf("TEN"); break;
        case JACK: printf("JACK"); break;
        case QUEEN: printf("QUEEN"); break;
        case KING: printf("KING"); break;
        case ACE: printf("ACE"); break;
        default:
        {
            fprintf(stderr, "Invalid Card Value: %d\n", card->value);
            return;
        }
    }

    printf(" of ");

    switch(card->suit)
    {
        case SPADES: printf("SPADES\n"); break;
        case DIAMONDS: printf("DIAMONDS\n"); break;
        case CLUBS: printf("CLUBS\n"); break;
        case HEARTS: printf("HEARTS\n"); break;
        default:
        {
            fprintf(stderr, "Invalid Card Suit: %d\n", card->suit);
            return;
        }
    }

    return;
}

//Generates a deck (Card Array) by allocating memory.
//Returns NULL if there is an error
Card* deck_generate(void)
{
    Card* deck = malloc(sizeof(Card) * TOTAL_CARDS);
    if(deck == NULL)
    {
        fprintf(stderr, "Could not allocate the deck into memory!\n");
        return NULL;
    }

    int i = 0;
    for(int suit=SPADES; suit != END_SUIT; suit++)
    {
        for(int value = NINE; value != END_VALUE; value++)
        {
            deck[i].value = value;
            deck[i].suit = suit;
            i++;
        }
    }

    return deck;
}
