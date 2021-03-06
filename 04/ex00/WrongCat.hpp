#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		virtual ~WrongCat();
		WrongCat & operator = (const WrongCat & src);

		void makeSound();
};


#endif //WRONGCAT_HPP
