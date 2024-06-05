#include "Card.h"
#include "supportFunc.h"


std::string Card::toStringCard() const {
    std::string str1;
    switch (m_suit) {
        case SUIT_SPADE:
            str1 = "Spade ";
            break;
        case SUIT_HEART:
            str1 = "Heart ";
            break;
        case SUIT_CLUB:
            str1 = "Club ";
            break;
        case SUIT_DIAMOND:
            str1 = "Diamond ";
            break;
        default:
            str1 = "";
            break;
    }

    std::string str2;
    switch (m_rank) {
        case RANK_2:
            str2 = "2";
            break;
        case RANK_3:
            str2 = "3";
            break;
        case RANK_4:
            str2 = "4";
            break;
        case RANK_5:
            str2 = "5";
            break;
        case RANK_6:
            str2 = "6";
            break;
        case RANK_7:
            str2 = "7";
            break;
        case RANK_8:
            str2 = "8";
            break;
        case RANK_9:
            str2 = "9";
            break;
        case RANK_10:
            str2 = "10";
            break;
        case RANK_JACK:
            str2 = "J";
            break;
        case RANK_QUEEN:
            str2 = "Q";
            break;
        case RANK_KING:
            str2 = "K";
            break;
        case RANK_ACE:
            str2 = "A";
            break;
        default:
            str2 = "";
            break;
    }
    return str1 + str2 + "\n";
}


int Card::getCardValue() const {
    switch (m_rank) {
        case RANK_2:
            return 2;
        case RANK_3:
            return 3;
        case RANK_4:
            return 4;
        case RANK_5:
            return 5;
        case RANK_6:
            return 6;
        case RANK_7:
            return 7;
        case RANK_8:
            return 8;
        case RANK_9:
            return 9;
        case RANK_10:
            return 10;
        case RANK_JACK:
            return 10;
        case RANK_QUEEN:
            return 10;
        case RANK_KING:
            return 10;
        case RANK_ACE:
            return 11;
    }
    return 0;
}

/*
std::array<Card, MAX_SUITS * MAX_RANK> createDeck() {
    std::array<Card, MAX_SUITS * MAX_RANK> deck{};
    int card = 0;
    for (int suit = 0; suit < MAX_SUITS; ++suit) {
        for (int rank = 0; rank < MAX_RANK; ++rank) {
            deck[card].suit = static_cast<Suit>(suit);
            deck[card].rank = static_cast<Rank>(rank);
            ++card;
        }
    }
    return deck;
}


std::string toStringDeck(std::array<Card, MAX_SUITS * MAX_RANK> deck) {
    int card = 0;
    std::string str{};
    for (int suit = 0; suit < MAX_SUITS; ++suit) {
        for (int rank = 0; rank < MAX_RANK; ++rank) {
            str += toStringCard(deck[card++]);
        }
    }
    return str;
}


void swapCard(Card &card1, Card &card2) {
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}


void shuffleDeck(std::array<Card, MAX_SUITS * MAX_RANK> &deck) {
    int card = 0;
    for (int suit = 0; suit < MAX_SUITS; ++suit) {
        for (int rank = 0; rank < MAX_RANK; ++rank) {
            int swapIndex = getRandomNumber(0, 51);
            swapCard(deck[card], deck[swapIndex]);
            ++card;
        }
    }
}


*/
