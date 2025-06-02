#ifndef PINOCHLE_H
#define PINOCHLE_H

typedef enum {
    SPADES,
    HEARTS,
    DIAMONDS,
    CLUBS,
    END_SUIT
} Suit;

typedef enum {
    NINE = 9,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,
    END_VALUE
} Value;

typedef struct {
    Suit suit;
    Value value;
} Card;

#define TOTAL_CARDS 6*4

//functions
void card_print(const Card* card);

Card* deck_init(void);
void deck_destroy(Card* deck);

#endif //PINOCHLE_H
