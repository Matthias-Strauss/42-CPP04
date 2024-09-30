/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:49:21 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 18:52:21 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_materia[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	~MateriaSource();

	MateriaSource &operator=(MateriaSource const &rhs);

	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};

#endif