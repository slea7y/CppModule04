/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 18:55:08 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/18 16:30:38 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	this->_brain = new Brain;
	std::cout << "Cat default constructor called\n";

}

Cat::Cat(const Cat &obj) : Animal(obj) {
	this->_brain = new Brain(*obj._brain);
	std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		this->_brain = new Brain(*other._brain);
	}
	std::cout << "Cat copy assigment operator called\n";
	return (*this);
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor\n";
}

void Cat::makeSound() const {
	std::cout << "* Cat: meow meow *\n";
}

Brain* Cat::getBrain() const {
	return (this->_brain);
}
