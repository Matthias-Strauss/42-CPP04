/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:09:34 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/15 18:53:56 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include "interface.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
Character::Character() : _name("default")
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Character default constructor called" << RESET << std::endl;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Character name constructor called" << RESET << std::endl;
}

Character::Character(Character const &copy)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Character copy constructor called" << RESET << std::endl;
	*this = copy;
}

/* ------------------------------ Deconstructor ----------------------------- */
Character::~Character()
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "Character destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
		{
			delete _materia[i];
			_materia[i] = NULL;
		}
	}
	for (int i = 0; i < _floorCount; i++)
	{
		if (_floor[i])
		{
			delete _floor[i];
			_floor[i] = NULL;
		}
	}
	_floorCount = 0;
}

/* ------------------------------ Copy operator ----------------------------- */
Character &Character::operator=(Character const &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i])
				delete _materia[i];
			_materia[i] = other._materia[i] ? other._materia[i]->clone() : NULL;
		}
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                                   Methods                                  */
/* -------------------------------------------------------------------------- */

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			std::cout << GREEN << "Materia successfully equipped." << RESET << std::endl;
			return;
		}
	}
	if (_floorCount < 100)
	{
		_floor[_floorCount++] = m;
		std::cout << RED << "Inventory full. Materia dropped on the floor." << RESET << std::endl;
	}
	else
	{
		delete m;
		std::cout << RED << "Floor is full. Materia discarded." << RESET << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _materia[idx])
	{
		if (_floorCount < 100)
		{
			_floor[_floorCount++] = _materia[idx];
			std::cout << GREEN << "Materia unequipped and dropped on the floor." << RESET << std::endl;
			_materia[idx] = NULL;
		}
		else
		{
			std::cout << RED << "Floor is full. Cannot unequip." << RESET << std::endl;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _materia[idx])
	{
		_materia[idx]->use(target);
		std::cout << GREEN << "Materia successfully used on " << target.getName() << "." << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "Materia not used. Invalid index or materia not equipped." << RESET << std::endl;
	}
}

AMateria *Character::_floor[100] = {NULL};
int Character::_floorCount = 0;
