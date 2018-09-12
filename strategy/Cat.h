#ifndef _CAT_
#define _CAT_

#include "IPet.h"

/*!
 * \brief Concrete strategy Cat 
 * 
 */
class Cat: public IPet {
 public:
  Cat() {
  }

  void greet(void) {
    std::cout << "hello i'am a cat" << std::endl;
  }
};

#endif //_CAT_
