/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 23:46:34 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/25 13:29:24 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string.h>

class Brain
{
	public	:
				Brain();
				Brain(Brain &src);
				Brain	&operator=(const Brain &src);
				virtual ~Brain();

				void				setIdea(int i, const std::string &newidea);
				const std::string	&getIdea(int i) const;
	private	:
				std::string	ideas[100];
};
#endif