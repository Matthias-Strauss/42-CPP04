/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:13 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/25 18:04:04 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat created using default constructor" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Cat created using parameterized  constructor" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat created using copy constructor" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */
Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

/* ------------------------------ Copy operator ----------------------------- */
Cat &Cat::operator=(Cat const &src)
{
	this->_type = src._type;
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */
void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
