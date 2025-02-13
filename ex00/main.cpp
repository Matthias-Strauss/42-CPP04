/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:04:16 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/13 16:44:22 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << std::endl;
		std::cout << "###################" << std::endl;
		std::cout << "--- Animal Test ---" << std::endl;
		std::cout << "###################" << std::endl;
		const Animal *h = new Animal();
		const Animal *i = new Dog();
		const Animal *j = new Cat();
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		h->makeSound();
		i->makeSound();
		j->makeSound();
		std::cout << std::endl;
		std::cout << "--- Deconstruction ---" << std::endl;
		delete j;
		delete i;
		delete h;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "\n--- Copy constructor ---" << std::endl;
		Dog firstDog;
		firstDog.setType("Test Dog");
		Dog secondDog(firstDog);

		std::cout << "Original dog type: " << firstDog.getType() << std::endl;
		std::cout << "Copied dog type: " << secondDog.getType() << std::endl;

		Cat firstCat;
		firstCat.setType("Test Cat");
		Cat secondCat = firstCat;

		std::cout << "Original cat type: " << firstCat.getType() << std::endl;
		std::cout << "Copied cat type: " << secondCat.getType() << std::endl;
	}
	{
		std::cout << "\n--- Assignment Operator Tests ---" << std::endl;
		Animal firstAnimal;
		firstAnimal.setType("Basic");

		Animal secondAnimal;
		secondAnimal = firstAnimal;

		std::cout << "First animal type: " << secondAnimal.getType() << std::endl;
		std::cout << "Second animal type: " << secondAnimal.getType() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "#########################" << std::endl;
		std::cout << "--- Wrong Animal Test ---" << std::endl;
		std::cout << "#########################" << std::endl;
		const WrongAnimal *hurr = new WrongAnimal();
		const WrongAnimal *durr = new WrongCat();
		const WrongCat *purr = new WrongCat();
		std::cout << hurr->getType() << std::endl;
		std::cout << durr->getType() << std::endl;
		std::cout << purr->getType() << std::endl;
		hurr->makeSound();
		durr->makeSound();
		purr->makeSound();
		std::cout << std::endl;
		std::cout << "--- Deconstruction ---" << std::endl;
		delete durr;
		delete hurr;
		delete purr;
		std::cout << std::endl;
	}
	return 0;
}