#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(const Cat & src);
		virtual ~Cat();
		Cat & operator = (const Cat & src);

		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;
};

#endif //CAT_HPP
