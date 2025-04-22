#ifndef CARD_H
#define CARD_H

class Card {
  public:
    virtual bool played() = 0;
    virtual bool discard() = 0;

    virtual void bonus() = 0;
};

#endif