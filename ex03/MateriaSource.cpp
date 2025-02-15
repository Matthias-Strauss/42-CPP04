/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:02:44 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/15 18:49:22 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "interface.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "MateriaSource default constructor called" << RESET << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	*this = copy;
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "MateriaSource copy constructor called" << RESET << std::endl;
}

MateriaSource::~MateriaSource()
{
	if (DEBUG_MESSAGES)
		std::cout << YELLOW << "MateriaSource destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i])
				delete _materia[i];
			_materia[i] = other._materia[i] ? other._materia[i]->clone() : NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *mat)
{
	if (!mat)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = mat->clone();
			std::cout << GREEN << "Materia learned" << RESET << std::endl;
			delete mat;
			return;
		}
	}
	std::cout << RED << "MateriaSource is full. Cannot learn more Materias." << RESET << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
		{
			std::cout << GREEN << "Materia created" << RESET << std::endl;
			return _materia[i]->clone();
		}
	}
	std::cout << RED << "MateriaSource does not have this type of materia." << RESET << std::endl;
	return NULL;
}
