#include "Deck.h"
#include "supportFunc.h"

Deck::Deck() {
    int card = 0;
    for (int suit = 0; suit < Card::MAX_SUITS; ++suit) {
        for (int rank = 0; rank < Card::MAX_RANK; ++rank) {
            m_deck[card] = Card(static_cast<Card::Suit>(suit), static_cast<Card::Rank>(rank));
            ++card;
        }
    }
}


std::string Deck::toString() {
    std::string str{};
    for(const auto& card: m_deck){
        str += card.toString();
    }
    return str;
}


void Deck::shuffleDeck() {
    int card = 0;
    for (int suit = 0; suit < Card::MAX_SUITS; ++suit) {
        for (int rank = 0; rank < Card::MAX_RANK; ++rank) {
            int swapIndex = getRandomNumber(0, 51);
            swapCard(m_deck[card], m_deck[swapIndex]);
            ++card;
        }
    }
}


void Deck::swapCard(Card &card1, Card &card2) {
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}



