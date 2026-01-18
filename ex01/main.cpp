/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:58:37 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/18 16:32:11 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    std::cout << "===== ANIMAL + BRAIN TEST =====\n";

    Dog dog;
    Cat cat;

    std::cout << "\n===== SETTING IDEAS =====\n";
    dog.getBrain()->setIdea("I want a prada bag", 0);
    dog.getBrain()->setIdea("Play New Bottega Azelia Banks", 1);
    cat.getBrain()->setIdea("I hat taylor swift",0);
    cat.getBrain()->setIdea("Slay!", 1);

    std::cout << "\n===== READING IDEAS =====\n";
    std::cout << "Dog idea 0: " << dog.getBrain()->getIdea(0) << "\n";
    std::cout << "Dog idea 1: " << dog.getBrain()->getIdea(1) << "\n";
    std::cout << "Cat idea 0: " << cat.getBrain()->getIdea(0) << "\n";
    std::cout << "Cat idea 1: " << cat.getBrain()->getIdea(1) << "\n";

    std::cout << "\n===== POLYMORPHISM TEST =====\n";
    Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int i = 0; i < 4; i++) {
        animals[i]->makeSound();  // virtual function test
    }

    std::cout << "\n===== COPY TEST =====\n";
    Dog dogCopy(dog); // deep copy test
    std::cout << "DogCopy idea 0: " << dogCopy.getBrain()->getIdea(0) << "\n";

    std::cout << "\n===== CLEANUP =====\n";
    for (int i = 0; i < 4; i++)
        delete animals[i]; // proper destructors for Dog/Cat/Brain

    std::cout << "\n===== END OF MAIN =====\n";
    return 0;
}
