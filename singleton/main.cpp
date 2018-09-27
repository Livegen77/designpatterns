#include <cstdlib>

#include "Singleton.h"

int main(void) {

	/*
	 * Will create the Singleton object
	 * The class Singleton will save the instance internally
	 */
	Singleton* _user1singleton = Singleton::getInstance();

	/*
	 * Following call will not create the Singleton object, 
	 * this will only return the instance of the object
	 */ 
	Singleton* _user2singleton = Singleton::getInstance();
	Singleton* _user3singleton = Singleton::getInstance();

	/*
	 * The following line will not compile
         */
	//Singleton* _tryinstantiate = Singleton();

	return EXIT_SUCCESS;
}
