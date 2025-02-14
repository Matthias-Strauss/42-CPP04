/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:12 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 17:58:46 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */
/* --------------------------------- Default -------------------------------- */
AAnimal::AAnimal(void) : _type("extremely_generic_animal")
{
    std::cout << "AAnimal created using default constructor" << std::endl;
}

AAnimal::AAnimal(const std::string &type) : _type(type)
{
    std::cout << "AAnimal created using parameterized constructor" << std::endl;
}

/* ---------------------------------- Copy ---------------------------------- */
AAnimal::AAnimal(AAnimal const &src)
{
    *this = src;
    std::cout << "AAnimal created using copy constructor" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */
AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destroyed" << std::endl;
}

/* ------------------------------ Copy operator ----------------------------- */
AAnimal &AAnimal::operator=(AAnimal const &src)
{
    this->_type = src._type;
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Getters & Setters                             */
/* -------------------------------------------------------------------------- */
std::string AAnimal::getType(void) const
{
    return this->_type;
}

void AAnimal::setType(const std::string &type)
{
    this->_type = type;
}

/* -------------------------------------------------------------------------- */
/*                                   Actions                                  */
/* -------------------------------------------------------------------------- */
// void Animal::makeSound(void) const
// {
// 	std::cout << "* extremely generic animal sound *" << std::endl;
// }