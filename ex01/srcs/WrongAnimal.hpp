/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:50:40 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/23 23:18:35 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string.h>

class WrongAnimal
{
	public:
			WrongAnimal();
			WrongAnimal(const WrongAnimal &src);
			virtual	~WrongAnimal();
			WrongAnimal	&operator=(const WrongAnimal &src);

			virtual void	makeSound() const;
			std::string		getType() const;

	protected	:
			std::string	type;
};

#endif