/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:10:04 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/17 18:12:29 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called\n";
	for (int i = 0; i < 100; i++) {
		_ideas[i] = "";
	}
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain &Brain::operator=(const Brain &other) {
	for (int i = 0; i < 100; i++)
	{
		if (this != &other)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {}

void Brain::setIdea(std::string idea, int index) {
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
	return ;
}

std::string Brain::getIdea( int index ) {
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	return ("");
}
