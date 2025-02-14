/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:46:21 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 17:22:25 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Brain::Brain()
{
	std::cout << "Brain created using default constructor" << std::endl;
}

Brain::Brain(const std::string &idea)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Idea " + std::to_string(i) + ": " + idea;
	std::cout << "Brain created using parameterized constructor" << std::endl;
}

Brain::Brain(Brain const &src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	std::cout << "Brain created using copy constructor" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Deconstructor                               */
/* -------------------------------------------------------------------------- */

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

/* ------------------------------ Copy operator ----------------------------- */
Brain &Brain::operator=(Brain const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Getters & Setters                             */
/* -------------------------------------------------------------------------- */

std::string Brain::getIdea(int i) const
{
	if (i < 0 || i >= MAX_IDEAS)
	{
		std::cout << "Error: Idea index out of bounds" << std::endl;
		return "";
	}
	return (this->_ideas[i]);
}

void Brain::setIdea(int i, const std::string &idea)
{
	if (i < 0 || i >= MAX_IDEAS)
	{
		std::cout << "Error: Idea index out of bounds" << std::endl;
		return;
	}
	this->_ideas[i] = idea;
}