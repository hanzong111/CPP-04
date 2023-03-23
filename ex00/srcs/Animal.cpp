/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:20:05 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/23 16:36:09 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	std::cout << "(Animal) Default constructor function is called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &src)
{
	std::cout << "(Animal) Copy constructor function is called" << std::endl;
	*this = src;
}

Animal	&Animal::operator=(const Animal &src)
{
	this->type = src.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "(Animal) Destructor function is called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "(Animal) Default animal does not make sounds" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}