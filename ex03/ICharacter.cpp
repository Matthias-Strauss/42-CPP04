/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:27:56 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/27 19:23:50 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(ICharacter const &copy)
{
	*this = copy;
	std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter deconstructor called" << std::endl;
}

ICharacter &ICharacter::operator=(ICharacter const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
	}
	std::cout << "ICharacter assignation operator called" << std::endl;
	return *this;
}
