/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:27:50 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/15 18:17:56 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "interface.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
Cure::Cure() : AMateria("cure")
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Cure default constructor called" << RESET << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Cure copy constructor called" << RESET << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */
Cure::~Cure()
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Cure destructor called" << RESET << std::endl;
}

Cure &Cure::operator=(Cure const &src)
{
	std::cout << "Cure assignation operator called" << std::endl;
	if (this != &src)
	{
		AMateria::operator=(src);
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                                   Action                                   */
/* -------------------------------------------------------------------------- */

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}
