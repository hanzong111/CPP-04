/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:52:53 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/25 14:16:31 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "(Dog) Default constructor function is called" << std::endl;
	this->type = "Dog";
	try
	{
		this->brain = new Brain();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		throw (e);
	}
}

Dog::Dog(Dog &src) : Animal(src)
{
	std::cout << "(Dog) Copy constructor function is called" << std::endl;
	try
	{
		this->brain = new Brain();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		throw (e);
	}
	*this = src;
}

Dog	&Dog::operator=(Dog &src)
{
	this->type = src.type;
	*this->brain = *(src.brain);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "(Dog) Destructor function is called" << std::endl;
	delete (this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "(Dog) Woof ! Woof !" << std::endl;
}

void	Dog::setIdea(int i, std::string newIdea)
{
	return(this->brain->setIdea(i, newIdea));
}

const std::string	&Dog::getIdea(int i) const
{
	return (this->brain->getIdea(i));
}