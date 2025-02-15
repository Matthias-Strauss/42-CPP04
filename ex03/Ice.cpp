/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:27:52 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/15 18:20:45 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "interface.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
Ice::Ice() : AMateria("ice")
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Ice default constructor called" << RESET << std::endl;
}

// Not needed because Ice can only have type Ice.
// Ice::Ice(std::string const &type) : AMateria(type)
// {
// 	std::cout << "Ice parameterized constructor called" << std::endl;
// }

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Ice copy constructor called" << RESET << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */
Ice::~Ice()
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Ice destructor called" << RESET << std::endl;
}

/* ------------------------------ Copy operator ----------------------------- */
Ice &Ice::operator=(Ice const &other)
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                                   Action                                   */
/* -------------------------------------------------------------------------- */

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << GREEN << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
