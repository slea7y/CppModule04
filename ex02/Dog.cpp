/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:56:34 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/18 15:08:39 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const Dog &other) {
	_brain = other._brain;
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other)
		_brain = other._brain;
	std::cout << "Dog assignment operator called\n";
	return (*this);
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor\n";
}

void Dog::makeSound() const {
	std::cout << "* Dog: woof woof *\n";
}
