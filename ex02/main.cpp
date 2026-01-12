/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:58:37 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 19:49:14 by majkijew         ###   ########.fr       */
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
	// const Animal* a = new Animal();
	const Animal* a = new Cat();

	a->makeSound();
	return (0);
}