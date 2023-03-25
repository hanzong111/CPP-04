/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:50:38 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/25 14:16:35 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
			Dog();
			Dog(Dog &src);
			virtual ~Dog();
			Dog	&operator=(Dog &src);

			void				makeSound() const;
			void				setIdea(int i, std::string newIdea);
			const std::string	&getIdea(int i) const;
	private	:
			Brain	*brain;
};
