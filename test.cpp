
#include "test.h"


void test1() {
    const Card cardQueenHearts(Card::SUIT_HEART, Card::RANK_QUEEN);
    std::cout << cardQueenHearts.toString() << " has the value " << cardQueenHearts.getCardValue() << '\n';
}


void test2() {
    srand(static_cast<unsigned int>(time(0)));
    Deck deck;
    deck.shuffleDeck();
    std::cout << deck.toString() << std::endl;
    std::cout << "The first card has value: " << deck.dealCard().getCardValue() << std::endl;;
    std::cout << "The second card has value: " << deck.dealCard().getCardValue() << std::endl;
}


void test3() {
    Deck deck;
    deck.shuffleDeck();
    std::cout << deck.toString() << std::endl;
    switch (BlackJack::playBlackJack(deck)) {
        case BlackJack::BlackJackResult::BLACKJACK_PLAYER_WIN:
            std::cout << "You win!\n";
            return;
        case BlackJack::BlackJackResult::BLACKJACK_DEALER_WIN:
            std::cout << "You lose!\n";
            return;
        case BlackJack::BlackJackResult::BLACKJACK_TIE:
            std::cout << "Tie\n";
            return;
    }
}
