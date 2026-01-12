/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 18:55:08 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 16:31:11 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called\n";
	this->setType("Cat");
}

Cat::~Cat() {
	std::cout << "Cat destructor\n";
}

void Cat::makeSound() const {
	std::cout << "* Cat: meow meow *\n";
}
