/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:12 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/26 14:43:05 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog created using default constructor" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type), _brain(new Brain())
{
	std::cout << "Dog created using parameterized  constructor" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog created using copy constructor" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */
Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destroyed" << std::endl;
}

/* ------------------------------ Copy operator ----------------------------- */
Dog &Dog::operator=(Dog const &src)
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
Brain *Dog::getBrain() const
{
	return _brain;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */
void Dog::makeSound() const
{
	std::cout << "* Woof *" << std::endl;
}
