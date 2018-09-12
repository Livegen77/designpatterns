#include <iostream>
#include <string>

#include "IPet.h"


/*!
 *
 * \brief Person represent the context where the Strategy is used.
 *        
 * In this exemple, the "Person" object want to introduce himself
 * and the type of pet it has
 */
class Person {
 public: 
  Person(IPet& pet, std::string name):
  _pet(pet),
  _name(name) {
  }

  void greetwithpet(void){
    std::cout << "Hello my name is " << _name << " and this is my pet." << std::endl;
    
  /* Call of the strategy */
  _pet.greet();   	
  }

 private:
  IPet& _pet;
  std::string _name;
};
