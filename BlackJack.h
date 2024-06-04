#ifndef BLACKJACK_BLACKJACK_H
#define BLACKJACK_BLACKJACK_H

#include "Card.h"


enum BlackJackResult{
    BLACKJACK_PLAYER_WIN,
    BLACKJACK_DEALER_WIN,
    BLACKJACK_TIE
};


// Если игрок побеждает, то return true
// Иначе return else
BlackJackResult playBlackJack(const std::array<Card, MAX_SUITS * MAX_RANK>& deck);


char getPlayerChoice();

#endif //BLACKJACK_BLACKJACK_H
