/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:13 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 18:02:15 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Cat::Cat() : AAnimal("Cat"), _brain(new Brain())
{
	std::cout << "Cat created using default constructor" << std::endl;
}

Cat::Cat(const std::string &type) : AAnimal(type), _brain(new Brain())
{
	std::cout << "Cat created using parameterized constructor" << std::endl;
}

Cat::Cat(Cat const &src) : AAnimal(src), _brain(new Brain(*src._brain))
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
Brain *Cat::getBrain() const
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
void Cat::makeSound() const
{
	std::cout << "* Miaou *" << std::endl;
}
