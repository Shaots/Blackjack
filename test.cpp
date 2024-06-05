
#include "test.h"


void test1() {
    const Card cardQueenHearts(Card::SUIT_HEART, Card::RANK_QUEEN);
    std::cout << cardQueenHearts.toStringCard() << " has the value " << cardQueenHearts.getCardValue() << '\n';
}

/*
void test2() {
    srand(static_cast<unsigned int>(time(0)));
    std::array<Card, MAX_SUITS * MAX_RANK> deck = createDeck();
    shuffleDeck(deck);
    std::cout << toStringDeck(deck) << std::endl;
    switch (playBlackJack(deck)) {
        case BLACKJACK_PLAYER_WIN: std::cout << "You win!\n"; return;
        case BLACKJACK_DEALER_WIN: std::cout << "You lose!\n"; return;
        case BLACKJACK_TIE: std::cout << "Tie\n"; return;
    }
}

void test3() {
    std::array<Card, MAX_SUITS * MAX_RANK> deck = createDeck();
    swapCard(deck[0], deck[12]);
    swapCard(deck[1], deck[25]);
    swapCard(deck[2], deck[38]);
    swapCard(deck[3], deck[51]);
    std::cout << toStringDeck(deck) << std::endl;
    switch (playBlackJack(deck)) {
        case BLACKJACK_PLAYER_WIN: std::cout << "You win!\n"; return;
        case BLACKJACK_DEALER_WIN: std::cout << "You lose!\n"; return;
        case BLACKJACK_TIE: std::cout << "Tie\n"; return;
    }
}
*/
