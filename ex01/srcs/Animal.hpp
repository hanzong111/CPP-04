/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:58:31 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/23 16:35:59 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string.h>

class	Animal
{
	public	:
				Animal();
				Animal(const Animal &src);
				Animal	&operator=(const Animal &src);
				virtual ~Animal();

				virtual void		makeSound() const;
				std::string	getType() const;
	protected	:
					std::string	type;
};
#endif