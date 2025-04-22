#include <iostream>

#include "Card.h"
#include "Normal.h"

int main () {
  Normal Heart1("Hearts", "J");

  cout << Heart1.get_chips() << endl;

  return 0;
};
