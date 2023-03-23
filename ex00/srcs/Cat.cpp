/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:52:53 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/23 16:20:53 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "(Cat) Default constructor function is called" << std::endl;
	this->type = "Cat";
}

// Cat::Cat(Cat &src)
// {
// 	std::cout << "(Cat) Copy constructor function is called" << std::endl;
// 	*this = src;
// }

Cat	&Cat::operator=(const Cat &src)
{
	this->type = src.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "(Cat) Destructor function is called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "(Cat) Meowwwww !" << std::endl;
}