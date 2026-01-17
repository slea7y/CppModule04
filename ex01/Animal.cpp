/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:52:31 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 16:35:16 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("") {
    std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string type) {
	std::cout << "Animal parameterized constructor called\n";
	_type = type;
}

Animal::Animal(const Animal &other) {
	_type = other._type;
	std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &other) {
	if (this != &other)
		_type = other._type;
	std::cout << "Animal assignment operator called\n";
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor\n";
};

void Animal::setType(std::string type) {
	_type = type;
}

std::string Animal::getType() const {
	return (_type);
}

void Animal::makeSound() const {
	std::cout << "* Animal sound *\n";
}
