/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 18:55:08 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/18 15:08:44 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called\n";
	this->setType("Cat");
	_brain = new Brain();
}

Cat::Cat(const Cat &other) {
	_brain = other._brain;
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other)
		_brain = other._brain;
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor\n";
}

void Cat::makeSound() const {
	std::cout << "* Cat: meow meow *\n";
}
