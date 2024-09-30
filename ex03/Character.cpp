/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:09:34 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 19:19:54 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
Character::Character() {}

Character::Character(std::string const &name) : _name(name) {}

Character::Character(Character const &copy)
{
	*this = copy;
}

/* ------------------------------ Deconstructor ----------------------------- */
Character::~Character()
{
}

/* ------------------------------ Copy operator ----------------------------- */
Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			this->_materia[i] = rhs._materia[i];
		}
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                                   Methods                                  */
/* -------------------------------------------------------------------------- */

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		this->_materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_materia[idx] != NULL)
	{
		this->_materia[idx]->use(target);
	}
}
