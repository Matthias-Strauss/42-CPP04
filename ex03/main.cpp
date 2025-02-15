/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:53:11 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/15 18:55:21 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "interface.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	{
		std::cout << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << BLUE << "-------- Test From the Subject ---------" << RESET << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "Creating new MateriaSource..." << RESET << std::endl;
		IMateriaSource *src = new MateriaSource();
		std::cout << CYAN << "Learning Ice..." << RESET << std::endl;
		src->learnMateria(new Ice());
		std::cout << CYAN << "Learning Cure..." << RESET << std::endl;
		src->learnMateria(new Cure());

		std::cout << CYAN << "Creating new Character..." << RESET << std::endl;
		ICharacter *me = new Character("me");
		std::cout << CYAN << "Creating new Ice Materia..." << RESET << std::endl;
		AMateria *tmp;
		tmp = src->createMateria("ice");
		std::cout << CYAN << "Equipping Ice Materia..." << RESET << std::endl;
		me->equip(tmp);
		std::cout << CYAN << "Creating new Cure Materia..." << RESET << std::endl;
		tmp = src->createMateria("cure");
		std::cout << CYAN << "Equipping Cure Materia..." << RESET << std::endl;
		me->equip(tmp);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	{
		std::cout << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << BLUE << "-------- Testing Deep Copy -------------" << RESET << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "Creating new original Character..." << RESET << std::endl;
		Character *original = new Character("original");

		std::cout << CYAN << "Equipping original character with some materias..." << RESET << std::endl;
		original->equip(new Ice());
		original->equip(new Cure());

		std::cout << CYAN << "Creating a copy of the original character..." << RESET << std::endl;
		Character *clone = new Character(*original);

		std::cout << CYAN << "Creating a target character..." << RESET << std::endl;
		ICharacter *target = new Character("target");

		std::cout << CYAN << "Original Character using materias:" << RESET << std::endl;
		original->use(0, *target);
		original->use(1, *target);
		std::cout << std::endl;

		std::cout << CYAN << "Clone Character using materias:" << RESET << std::endl;
		clone->use(0, *target);
		clone->use(1, *target);

		delete target;
		delete clone;
		delete original;
	}

	{
		std::cout << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << BLUE << "-------- Testing Inventory Limits ------" << RESET << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "Creating new hero character..." << RESET << std::endl;
		Character *hero = new Character("hero");
		std::cout << CYAN << std::endl;

		std::cout << CYAN << "Trying to equip more than 4 materias..." << RESET << std::endl;
		for (int i = 0; i < 6; i++)
		{
			if (i % 2 == 0)
			{
				std::cout << CYAN << "Equipping Ice Materia..." << RESET << std::endl;
				hero->equip(new Ice());
			}
			else
			{
				std::cout << CYAN << "Equipping Cure Materia..." << RESET << std::endl;
				hero->equip(new Cure());
			}
		}
		std::cout << CYAN << std::endl;

		std::cout << CYAN << "Trying to use non-existent slots..." << RESET << std::endl;
		std::cout << CYAN << "Creating a dummy character..." << RESET << std::endl;
		ICharacter *dummy = new Character("dummy");
		std::cout << CYAN << "Using invalid slot -1..." << RESET << std::endl;
		hero->use(-1, *dummy);
		std::cout << CYAN << "Using invalid slot 4..." << RESET << std::endl;
		hero->use(4, *dummy);
		std::cout << CYAN << std::endl;

		std::cout << CYAN << "Unequipping and trying to use the empty slot..." << RESET << std::endl;
		std::cout << CYAN << "Unequipping slot 1..." << RESET << std::endl;
		hero->unequip(1);
		std::cout << CYAN << "Using empty slot 1..." << RESET << std::endl;
		hero->use(1, *dummy);
		std::cout << CYAN << std::endl;

		delete dummy;
		delete hero;
	}

	{
		std::cout << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << BLUE << "------ Testing MateriaSource -----------" << RESET << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << std::endl;

		MateriaSource *ms = new MateriaSource();

		std::cout << CYAN << "Trying to learn more than 4 materias..." << RESET << std::endl;
		for (int i = 0; i < 6; i++)
		{
			if (i % 2 == 0)
				ms->learnMateria(new Ice());
			else
				ms->learnMateria(new Cure());
		}

		std::cout << CYAN << "Trying to create non-existent materia..." << RESET << std::endl;
		AMateria *tmp = ms->createMateria("rock");
		if (tmp == NULL)
			std::cout << CYAN << "Successfully returned NULL for unknown materia type" << RESET << std::endl;

		delete ms;
	}

	{
		std::cout << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << BLUE << "--- Testing Abstract Class Prevention --" << RESET << std::endl;
		std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
		std::cout << std::endl;

		// Uncomment the following line to see compilation error: Abstract Class cannot be instantiated

		// AMateria* am = new AMateria();
		// ICharacter* ic = new ICharacter();
		// IMateriaSource* ims = new IMateriaSource();

		std::cout << CYAN << "Abstract classes couldn't be instantiated" << RESET << std::endl;
	}

	return 0;
}