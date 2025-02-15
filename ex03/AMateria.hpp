/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:53:18 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 19:09:36 by mstrauss         ###   ########.fr       */
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
	AMateria &operator=(AMateria const &rhs);
	std::string _type;

public:
	AMateria(std::string const &type);
	virtual ~AMateria();

	std::string const &getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif