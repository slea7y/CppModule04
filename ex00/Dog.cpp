/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:56:34 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 16:33:55 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->setType("Dog");
	std::cout << "Dog Default constructor called\n";
}

Dog::~Dog() {
	std::cout << "Dog destructor\n";
}

void Dog::makeSound() const {
	std::cout << "* Dog: woof woof *\n";
}
