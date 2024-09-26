/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:13 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/26 15:40:21 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat created using default constructor" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type), _brain(new Brain())
{
	std::cout << "Cat created using parameterized constructor" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Cat created using copy constructor" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */
Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destroyed" << std::endl;
}

/* ------------------------------ Copy operator ----------------------------- */
Cat &Cat::operator=(Cat const &src)
{
	if (this != &src)
	{
		Animal::operator=(src);
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Getters & Setters                             */
/* -------------------------------------------------------------------------- */
Brain *Cat::getBrain() const
{
	return _brain;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */
void Cat::makeSound() const
{
	std::cout << "* Miaou *" << std::endl;
}
