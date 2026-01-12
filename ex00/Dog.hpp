/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:56:15 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 15:44:06 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

class Dog : public Animal {
	private:
		/* data */
	public:
		Dog(/* args */);
		~Dog();
		void makeSound();
};

#endif