/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:58:37 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/17 18:16:12 by majkijew         ###   ########.fr       */
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
    dog.getBrain()->setIdea(0, "I want a bone");
    dog.getBrain()->setIdea(1, "Play fetch");
    cat.getBrain()->setIdea(0, "I want fish");
    cat.getBrain()->setIdea(1, "Sleep on keyboard");

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
