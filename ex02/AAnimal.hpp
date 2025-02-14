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