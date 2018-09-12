#include <iostream>
#include <string>

#include "IPet.h"

class Person {
 public: 
  Person(IPet& pet, std::string name):
  _pet(pet),
  _name(name) {
  }

  void greetwithpet(void){
    std::cout << "Hello my name is " << _name << " and this is my pet." << std::endl;
    _pet.greet();   	
  }

 private:
  IPet& _pet;
  std::string _name;
};
