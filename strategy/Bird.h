#ifndef _BIRD_
#define _BIRD_

#include <iostream>

#include "IPet.h"

/*!
 * \brief Concrete strategy Bird 
 * 
 */
class Bird: public IPet {
 public:
  Bird() {
  }

  void greet(void) {
    std::cout << "Hello i'am a bird" << std::endl;
  }
};

#endif //_BIRD_
