/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:12 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/26 16:26:53 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
/* --------------------------------- Default -------------------------------- */
Animal::Animal(void) : _type("extremely_generic_animal")
{
	std::cout << "Animal created using default constructor" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Animal created using parameterized constructor" << std::endl;
}

/* ---------------------------------- Copy ---------------------------------- */
Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Animal created using copy constructor" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */
Animal::~Animal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

/* ------------------------------ Copy operator ----------------------------- */
Animal &Animal::operator=(Animal const &src)
{
	this->_type = src._type;
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Getters & Setters                             */
/* -------------------------------------------------------------------------- */
std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::setType(const std::string &type)
{
	this->_type = type;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */
// void Animal::makeSound(void) const
// {
// 	std::cout << "* extremely generic animal sound *" << std::endl;
// }
