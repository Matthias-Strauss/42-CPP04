/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:53:20 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/15 18:20:45 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "interface.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

AMateria::AMateria() : _type("default")
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "AMateria default constructor called" << RESET << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "AMateria type constructor called" << RESET << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "AMateria copy constructor called" << RESET << std::endl;
	*this = copy;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructor                                 */
/* -------------------------------------------------------------------------- */

AMateria::~AMateria()
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "AMateria destructor called" << RESET << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Operators                                  */
/* -------------------------------------------------------------------------- */

AMateria &AMateria::operator=(AMateria const &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "AMateria assignment operator called" << std::endl;
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                                 Getters                                  */
/* -------------------------------------------------------------------------- */

std::string const &AMateria::getType() const
{
	return _type;
}

/* -------------------------------------------------------------------------- */
/*                                 Member Functions                            */
/* -------------------------------------------------------------------------- */

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "AMateria use function called" << std::endl;
}
