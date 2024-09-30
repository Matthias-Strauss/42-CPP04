/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:04:16 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/30 18:02:58 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(int ac, char **av)
{
	// Animal test(); //uncomment this to tst if Animal Class is instantiable
	if (ac != 2 || std::stoi(av[1]) <= 0)
	{
		std::cout << "Usage: ./wof <number_of_animals>" << std::endl;
		return 1;
	}

	int amount = std::stoi(av[1]);

	Animal **animals = new Animal *[amount];

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

	return 0;
}