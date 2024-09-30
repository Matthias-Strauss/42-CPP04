/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:50:41 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 19:13:57 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_materia[4];

public:
	Character();
	Character(std::string const &name);
	Character(Character const &copy);
	~Character();
	Character &operator=(Character const &rhs);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif