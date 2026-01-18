/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:56:34 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/18 15:34:11 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const Dog &obj) : Animal(obj) {
	this->_brain = new Brain(*obj._brain);
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		this->_brain = new Brain(*other._brain);
	}
	std::cout << "Dog copy assigment operator called\n";
	return (*this);
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog destructor\n";
}

void Dog::makeSound() const {
	std::cout << "* Dog: woof woof *\n";
}
	
Brain* Dog::getBrain() const {
	return (this->_brain);
}
