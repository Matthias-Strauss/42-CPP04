/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:13 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/25 19:36:34 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat created using default constructor" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
	std::cout << "WrongCat created using parameterized  constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << "WrongCat created using copy constructor" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

/* ------------------------------ Copy operator ----------------------------- */
WrongCat &WrongCat::operator=(WrongCat const &src)
{
	this->_type = src._type;
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */
void WrongCat::makeSound() const
{
	std::cout << "* BzzzRZzzzzzzrRRRRRRrr *" << std::endl;
}
