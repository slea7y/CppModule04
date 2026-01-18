/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:58:37 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/18 17:24:57 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=========constructors =============" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "=========animal sounds=============" << std::endl;
	i->makeSound();
    j->makeSound();
    meta->makeSound();

	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* wd = new WrongCat();
    // std::cout << wd->getType() << " " << std::endl;

	std::cout << std::endl;

	std::cout << "=========wrong sounds=============" << std::endl;
	w->makeSound();
	wd->makeSound();
	
	std::cout << std::endl;

	std::cout << "============copy test===============" << std::endl;
	Cat a;
	Cat copy(a);
	copy.makeSound();

	std::cout << std::endl;
	
	std::cout << "============ destructors ===========" << std::endl;
	delete i;
	delete wd;
	delete w;
	delete j;
	delete meta;
	
}