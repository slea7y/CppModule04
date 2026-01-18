/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:56:34 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/18 17:10:18 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->setType("Dog");
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const Dog &obj) : Animal(obj) {
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Dog copy assigment operator called\n";
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor\n";
}

void Dog::makeSound() const {
	std::cout << "* Dog: woof woof *\n";
}
