#include <cstddef>

#include <iostream>

#include "Singleton.h"

Singleton* Singleton::_singletonptr = 0;

Singleton::Singleton() {
  std::cout << "creation singleton object" << std::endl;	
}

Singleton* Singleton::getInstance() {
  if(_singletonptr == 0) {
    _singletonptr = new Singleton(); 
  }

  return _singletonptr;	
}


