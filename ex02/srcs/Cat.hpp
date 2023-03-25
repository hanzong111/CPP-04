/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:50:38 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/25 14:16:21 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
			Cat();
			Cat(Cat &src);
			virtual ~Cat();
			Cat	&operator=(const Cat &src);

			void				makeSound() const;
			void				setIdea(int i, std::string newIdea);
			const std::string	&getIdea(int i) const;
	private	:
			Brain	*brain;
};