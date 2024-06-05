#ifndef BLACKJACK_BLACKJACK_H
#define BLACKJACK_BLACKJACK_H

#include "Card.h"


enum BlackJackResult{
    BLACKJACK_PLAYER_WIN,
    BLACKJACK_DEALER_WIN,
    BLACKJACK_TIE
};


BlackJackResult playBlackJack(const std::array<Card, MAX_SUITS * MAX_RANK>& deck);


bool checkAce(const Card& card);


char getPlayerChoice();

#endif //BLACKJACK_BLACKJACK_H
