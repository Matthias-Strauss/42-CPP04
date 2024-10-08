/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:27:48 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 18:30:27 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CURE_H
#define CURE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &copy);
	Cure(std::string const &type);
	~Cure();
	Cure &operator=(Cure const &rhs);

	AMateria *clone() const;

	void use(ICharacter &target);
};

#endif