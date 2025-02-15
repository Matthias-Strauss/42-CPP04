/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:27:54 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 19:10:52 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICE_H
#define ICE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &copy);
	~Ice();
	Ice &operator=(Ice const &rhs);

	AMateria *clone() const;

	void use(ICharacter &target);
};

#endif