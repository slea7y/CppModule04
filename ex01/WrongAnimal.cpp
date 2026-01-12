/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:41:10 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 18:01:52 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("") {
    std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal parameterized constructor called\n";
	_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	_type = other._type;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other)
		_type = other._type;
	std::cout << "WrongAnimal assignment operator called\n";
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor\n";
};

void WrongAnimal::setType(std::string type) {
	_type = type;
}

std::string WrongAnimal::getType() const {
	return (_type);
}

void WrongAnimal::makeSound() const {
	std::cout << "* WrongAnimal sound *\n";
}
