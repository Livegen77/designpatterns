#ifndef _DOG_
#define _DOG_

#include <iostream>

#include "IPet.h"

class Dog: public IPet {
 public:
  Dog() {
  }

  void greet(void) {
    std::cout << "Hello i'am a dog" << std::endl;
  }
};

#endif //_DOG_
