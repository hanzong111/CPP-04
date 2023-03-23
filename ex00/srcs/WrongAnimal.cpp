/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 23:09:29 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/23 23:18:36 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "(WrongAnimal) Default constructor function is called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "(WrongAnimal) Copy constructor function is called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "(WrongAnimal) Destructor function is called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	this->type = src.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "(WrongAnimal) Default WrongAnimal does not make sounds" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}