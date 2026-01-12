/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:56:34 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 19:28:10 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default constructor called\n";
	this->setType("Dog");
	_brain = new Brain;
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
