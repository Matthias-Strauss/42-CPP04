/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:28:28 by mstrauss          #+#    #+#             */
/*   Updated: 2025/02/14 18:28:29 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include <string>

class AAnimal
{
public:
    AAnimal();
    AAnimal(const std::string &type);
    AAnimal(AAnimal const &src);
    virtual ~AAnimal();
    AAnimal &operator=(AAnimal const &src);

    std::string getType(void) const;
    void setType(const std::string &type);

    virtual void makeSound() const = 0;

protected:
    std::string _type;
};

#endif