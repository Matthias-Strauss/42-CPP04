/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:12 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 18:02:15 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Dog::Dog() : AAnimal("Dog"), _brain(new Brain())
{
	std::cout << "Dog created using default constructor" << std::endl;
}

Dog::Dog(const std::string &type) : AAnimal(type), _brain(new Brain())
{
	std::cout << "Dog created using parameterized  constructor" << std::endl;
}

Dog::Dog(Dog const &src) : AAnimal(src), _brain(new Brain(*src._brain))
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
		AAnimal::operator=(src);
		if (!src._brain)
		{
			std::cout << "Error: Source brain is null" << std::endl;
			return *this;
		}
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
	if (!_brain)
	{
		std::cout << "Error: Brain is null" << std::endl;
		return nullptr;
	}
	return _brain;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */
void Dog::makeSound() const
{
	std::cout << "* Woof *" << std::endl;
}
