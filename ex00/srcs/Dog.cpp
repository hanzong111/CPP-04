/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:52:53 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/23 16:15:08 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "(Dog) Default constructor function is called" << std::endl;
	this->type = "Dog";
}

// Dog::Dog(Dog &src)
// {
// 	std::cout << "(Dog) Copy constructor function is called" << std::endl;
// 	*this = src;
// }

Dog	&Dog::operator=(Dog &src)
{
	this->type = src.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "(Dog) Destructor function is called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "(Dog) Woof ! Woof !" << std::endl;
}