/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:12 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/25 19:20:03 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
/* --------------------------------- Default -------------------------------- */
WrongAnimal::WrongAnimal(void) : _type("extremely_generic_WrongAnimal")
{
	std::cout << "WrongAnimal created using default constructor" << std::endl;
}

/* ------------------------------ Parameterized ----------------------------- */
WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "WrongAnimal created using parameterized constructor" << std::endl;
}

/* ---------------------------------- Copy ---------------------------------- */
WrongAnimal::WrongAnimal(WrongAnimal const &src) : _type(src._type)
{
	std::cout << "WrongAnimal created using copy constructor" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

/* ------------------------------ Copy operator ----------------------------- */
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	this->_type = src._type;
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Getters & Setters                             */
/* -------------------------------------------------------------------------- */
std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

void WrongAnimal::setType(const std::string &type)
{
	this->_type = type;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */
void WrongAnimal::makeSound(void) const
{
	std::cout << "* extremely generic WrongAnimal sound *" << std::endl;
}
