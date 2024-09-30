/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:02:44 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 19:05:24 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			this->_materia[i] = rhs._materia[i];
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = mat;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
		{
			return this->_materia[i]->clone();
		}
	}
	return NULL;
}
