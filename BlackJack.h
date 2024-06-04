#ifndef BLACKJACK_BLACKJACK_H
#define BLACKJACK_BLACKJACK_H

#include "Card.h"

// Если игрок побеждает, то return true
// Иначе return else
bool playBlackJack(const std::array<Card, MAX_SUITS * MAX_RANK>& deck);


char getPlayerChoice();

#endif //BLACKJACK_BLACKJACK_H
