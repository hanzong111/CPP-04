/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:52:04 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/25 13:31:36 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "(Brain) Default constructor function is called" << std::endl;
}

Brain::Brain(Brain &src)
{

	std::cout << "(Brain) Copy constructor function is called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "(Brain) Destructor function is called" << std::endl;
}

Brain	&Brain::operator=(const Brain &src)
{
	for(int i = 0; i < 100; i++)
		this->setIdea(i, src.getIdea(i));
	return (*this);
}

void	Brain::setIdea(int i, const std::string &newidea)
{
	if (i < 0 || i >= 100)
		return ;
	this->ideas[i] = newidea;
}

const std::string	&Brain::getIdea(int i) const
{
	if (i < 0 || i >= 100)
		return (this->ideas[0]);
	return (this->ideas[i]);
}