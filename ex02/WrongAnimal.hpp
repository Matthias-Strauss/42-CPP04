/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:09 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/25 17:31:19 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const &src);

	std::string getType(void) const;
	void setType(const std::string &type);

	virtual void makeSound() const;

protected:
	std::string _type;
};

#endif