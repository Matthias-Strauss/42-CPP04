/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:11 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 15:35:52 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const std::string &type);
	WrongCat(WrongCat const &src);
	virtual ~WrongCat();
	WrongCat &operator=(WrongCat const &src);

	void makeSound() const;
};

#endif