/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:40:14 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 18:01:43 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called\n";
	this->setType("WrongCat");
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor\n";
}

void WrongCat::makeSound() const {
	std::cout << "* WrongCat: wrongmeow wrongmeow *\n";
}
