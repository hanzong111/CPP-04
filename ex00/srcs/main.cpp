/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:59:07 by schuah            #+#    #+#             */
/*   Updated: 2023/05/26 16:36:38 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	{
		std::cout << "\n---------- EX00 Main ----------\n" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete (meta);
		delete (j);
		delete (i);
	}
	{
		std::cout << "\n---------- EX00 Test ----------\n" << std::endl;
		const WrongAnimal* w_animal = new WrongAnimal();
		const WrongAnimal* w_cat = new WrongCat();
		// WrongCat cat2;
		
		// cat2.makeSound();
		
		std::cout << w_animal->getType() << std::endl;
		std::cout << w_cat->getType() << std::endl;
		w_animal->makeSound();
		w_cat->makeSound();
		delete (w_animal);
		delete (w_cat);
	}
	return (0);
}