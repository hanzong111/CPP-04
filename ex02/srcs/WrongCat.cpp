/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 23:14:12 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/23 23:16:15 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "(WrongCat) Default constructor function is called" << std::endl;
	this->type = "WrongCat";
}

// WrongCat::WrongCat(WrongCat &src)
// {
// 	std::cout << "(WrongCat) Copy constructor function is called" << std::endl;
// 	*this = src;
// }

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "(WrongCat) Destructor function is called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "(WrongCat) Meowwwww !" << std::endl;
}