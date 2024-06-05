#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include "Card.h"

class Deck {
public:
    Deck();

    std::string toString();

    void shuffleDeck();

private:
    static void swapCard(Card &card1, Card &card2);

private:
    std::array<Card, Card::MAX_RANK * Card::MAX_SUITS> m_deck;
};


#endif //BLACKJACK_DECK_H
