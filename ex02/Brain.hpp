/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:46:23 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/26 13:45:57 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public:
	Brain();
	Brain(const std::string &idea);
	Brain(Brain const &src);
	~Brain();
	Brain &operator=(Brain const &src);

	std::string getIdea(int i) const;
	void setIdea(int i, const std::string &idea);

protected:
	std::string _ideas[100];
};

#endif