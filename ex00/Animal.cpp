/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:52:31 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 15:51:13 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("") {}

Animal::Animal(std::string type) {
    _type = type;
}

Animal::Animal(const Animal &other) {

}

Animal &Animal::operator=(const Animal &other) {
    
}

Animal::~Animal() {};

void Animal::setType(std::string type) {
    _type = type;
}

std::string Animal::getType() {
    return (_type);
}

void Animal::makeSound() {
    std::cout << "* Animal sound *\n";
}
