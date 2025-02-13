/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:11 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/13 15:08:40 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const std::string &type);
	Cat(Cat const &src);
	virtual ~Cat();
	Cat &operator=(Cat const &src);

	void makeSound() const override;
};

#endif