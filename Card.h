#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include <iostream>
#include <cstring>
#include <array>

class Card {
public:
    enum Suit {
        SUIT_SPADE,     // Лопаты
        SUIT_HEART,     // Червы
        SUIT_CLUB,      // Трефы
        SUIT_DIAMOND,   // Бубны
        MAX_SUITS
    };

    enum Rank {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,  // Валет
        RANK_QUEEN, // Дама
        RANK_KING,  // Король
        RANK_ACE,   // Туз
        MAX_RANK
    };

public:
    Card(Suit suit = MAX_SUITS, Rank rank = MAX_RANK) : m_suit(suit), m_rank(rank) {}

    std::string toString() const;

    int getCardValue() const;

private:
    Suit m_suit;
    Rank m_rank;
};

#endif //BLACKJACK_CARD_H
