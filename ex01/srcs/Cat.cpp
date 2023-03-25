/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:52:53 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/25 14:16:16 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "(Cat) Default constructor function is called" << std::endl;
	this->type = "Cat";
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

Cat::Cat(Cat &src) : Animal(src)
{
	std::cout << "(Cat) Copy constructor function is called" << std::endl;
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

Cat	&Cat::operator=(const Cat &src)
{
	this->type = src.type;
	*this->brain = *(src.brain);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "(Cat) Destructor function is called" << std::endl;
	delete (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "(Cat) Meowwwww !" << std::endl;
}

void	Cat::setIdea(int i, std::string newIdea)
{
	return(this->brain->setIdea(i, newIdea));
}

const std::string	&Cat::getIdea(int i) const
{
	return (this->brain->getIdea(i));
}