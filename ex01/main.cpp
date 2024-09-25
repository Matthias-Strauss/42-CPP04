/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:04:16 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/25 19:43:39 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *h = new Animal();
	const Animal *i = new Dog();
	const Animal *j = new Cat();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	h->makeSound();
	i->makeSound();
	j->makeSound();

	const WrongAnimal *hurr = new WrongAnimal();
	const WrongAnimal *durr = new WrongCat();
	std::cout << hurr->getType() << " " << std::endl;
	std::cout << durr->getType() << " " << std::endl;
	hurr->makeSound();
	durr->makeSound();

	delete durr;
	delete hurr;
	delete j;
	delete i;
	delete h;
	return 0;
}