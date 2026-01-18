/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:40:14 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/18 17:11:47 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called\n";
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj) {
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this != &other)
		WrongAnimal::operator=(other);
	std::cout << "WrongCat copy assigment operator called\n";
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor\n";
}

void WrongCat::makeSound() const {
	std::cout << "* WrongCat: wrongmeow wrongmeow *\n";
}
