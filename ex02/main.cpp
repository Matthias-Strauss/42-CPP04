/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:04:16 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 18:06:23 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(int ac, char **av)
{

	{
		AAnimal test(); // uncomment to show AAnimal is uninstantiable
	}

	{
		if (ac != 2 || std::stoi(av[1]) <= 0 || std::stoi(av[1]) > 10)
		{
			std::cout << "Usage: ./wof <number_of_animals(1-10)>" << std::endl;
			return 1;
		}

		int amount = std::stoi(av[1]);

		AAnimal **animals = new AAnimal *[amount];

		for (int i = 0; i < amount; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog(("Dog_" + std::to_string(i)));
			else
				animals[i] = new Cat(("Cat_" + std::to_string(i)));
		}

		for (int i = 0; i < amount; i++)
		{
			animals[i]->makeSound();
		}

		for (int i = 0; i < amount; i++)
		{
			delete animals[i];
		}

		delete[] animals;
	}
	std::cout << std::endl;
	std::cout << "Deep Copy Test:" << std::endl;
	std::cout << std::endl;
	Dog basic("Dog");
	basic.getBrain()->setIdea(2, "Original Idea of basic Dog");
	{
		std::cout << std::endl;
		std::cout << "--beginning of scope--" << std::endl;
		Dog tmp = basic;
		std::cout << "setting tmp dog idea to 'Changed Idea of tmp Dog'" << std::endl;
		tmp.getBrain()->setIdea(2, "Changed Idea of tmp Dog");
		std::cout << "basic dog: " << basic.getBrain()->getIdea(2) << std::endl;
		std::cout << "tmp dog: " << tmp.getBrain()->getIdea(2) << std::endl;
		std::cout << "--end of scope--" << std::endl;
		std::cout << std::endl;
	}
	basic.makeSound();
	std::cout << "basic dog: " << basic.getBrain()->getIdea(2) << std::endl;
	return 0;
}