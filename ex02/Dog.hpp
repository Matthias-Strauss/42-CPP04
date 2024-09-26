/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:10 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/26 13:56:39 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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