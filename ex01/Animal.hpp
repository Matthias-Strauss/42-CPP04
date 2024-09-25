/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:09 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/25 17:31:19 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	Animal(const std::string &type);
	Animal(Animal const &src);
	virtual ~Animal();
	Animal &operator=(Animal const &src);

	std::string getType(void) const;
	void setType(const std::string &type);

	virtual void makeSound() const;

protected:
	std::string _type;
};

#endif