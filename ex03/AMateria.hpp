/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:53:18 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 19:17:03 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected:
	AMateria();
	AMateria(AMateria const &copy);
	virtual ~AMateria() = 0;
	AMateria &operator=(AMateria const &rhs);
	std::string _type;

public:
	AMateria(std::string const &type);

	std::string const &getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target) = 0;
};

#endif