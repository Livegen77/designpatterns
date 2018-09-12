#include <cstdlib>

#include "Bird.h"
#include "Cat.h"
#include "Dog.h"
#include "Person.h"

int main(void) {

	Bird johnbird;
	Cat joecat;
	Dog valeriedog;

	Person john(johnbird, "john"); 
	Person joe(joecat, "joe");
	Person valerie(valeriedog,"valerie");

	john.greetwithpet();
	joe.greetwithpet();
	valerie.greetwithpet();

	return EXIT_SUCCESS;
}
