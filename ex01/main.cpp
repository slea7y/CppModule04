/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:58:37 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 18:54:12 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

// 	const WrongAnimal* w = new WrongAnimal();
// 	const WrongAnimal* wd = new WrongCat();
//     // std::cout << wd->getType() << " " << std::endl;
// 	w->makeSound();
// 	wd->makeSound();

// 	// const WrongAnimal* t = new Cat();
	
// }

int main()
{
	const Animal* a[10];

	int i = 0;
	while (i < 10)
	{
		if (i % 2 == 0)
			a[i] = new Dog;
		else
			a[i] = new Cat;
		i++;
	}
	i = 0;

	while (i < 10) {
		a[i]->makeSound();
		i++;
	}
	i = 0;
	while (i < 10)
	{
		delete a[i];
		i++;
	}
	// delete j;//should not create a leak
	// delete i;
	return (0);
}