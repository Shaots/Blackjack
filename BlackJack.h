#ifndef BLACKJACK_BLACKJACK_H
#define BLACKJACK_BLACKJACK_H

#include "Card.h"
#include "Deck.h"


class BlackJack{
public:
    enum BlackJackResult{
        BLACKJACK_PLAYER_WIN,
        BLACKJACK_DEALER_WIN,
        BLACKJACK_TIE
    };

    static BlackJackResult playBlackJack(Deck &deck);

private:
    static char getPlayerChoice();

    static bool checkAce(const Card& card);
};









#endif //BLACKJACK_BLACKJACK_H
