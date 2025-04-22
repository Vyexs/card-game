#ifndef NORMAL_H
#define NORMAL_H

#include "Card.h"

#include <iostream>

#include <string>

using namespace std;

class Normal : public Card {
  private:
    string suit;
    string rank;
    int chips;
  public:
    Normal(string suit, string rank) {
      this->suit = suit;
      this->rank = rank;

      set_chips(rank);
    };

    int get_chips() { return this->chips; };

    void set_chips(string rank) {
      if (rank.length() > 1) {
        this->chips = 10;
      } else {
        if (rank[0] - '0' > 9) {
          switch(rank[0]) {
            case 'A':
              this->chips = 14;
              break;
            case 'K':
              this->chips = 13;
              break;
            case 'Q':
              this->chips = 12;
              break;
            case 'J':
              this->chips = 11;
              break;
          };
        } else {
          this->chips = stoi(rank);
        };
      };
    };

    bool played() {
      return 1;
    };
    bool discard() {
      return 1;
    };

    void bonus () {};

    ~Normal() {};
};

class Bonus : public Normal {
  private:
    string type = "Bonus";
    int bonusChips = 30;
  public:
    string get_type() {
      return this->type;
    };
};

#endif