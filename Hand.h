#ifndef HAND_H
#define HAND_H

#include "Card.h"

#include <vector>

class Hand {
  private:
    
  public:
    virtual int calculate_chips() = 0;
    
    void check_hands_kind() {};
};

class StraightFlush : public Hand {
  private:
    int bonusChips = 100;
    int mult = 8;
  public:
    int calculate_chips() {
      
    };
};

#endif
