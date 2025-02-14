/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:10 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 17:29:35 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const std::string &type);
	Dog(Dog const &src);
	virtual ~Dog();
	Dog &operator=(Dog const &src);

	Brain *getBrain() const;
	void makeSound() const override;

private:
	Brain *_brain;
};

#endif