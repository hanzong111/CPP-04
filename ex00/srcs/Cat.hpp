/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:50:38 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/23 16:43:44 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

class Cat : public Animal
{
	public:
			Cat();
			Cat(const Cat &src);
			virtual ~Cat();
			Cat	&operator=(const Cat &src);

			void	makeSound() const;
};