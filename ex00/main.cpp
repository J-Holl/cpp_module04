/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:46:55 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 11:07:22 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	WrongAnimal* Wmeta = new WrongAnimal();
	WrongAnimal* Wi = new WrongCat();
	std::cout << Wmeta->getType() << " " << std::endl;
	std::cout << Wi->getType() << " " << std::endl;
	Wi->makeSound(); //will output the wrongAnimal sound!
	Wmeta->makeSound();
	WrongCat* Wcat = new WrongCat();
	Wcat->makeSound();
	
	std::cout << "Animal" << std::endl;
	delete meta;
	std::cout << "Dog" << std::endl;
	delete j;
	std::cout << "Cat" << std::endl;
	delete i;
	std::cout << "Wrong Animal" << std::endl;
	delete Wmeta;
	std::cout << "Wrong Cat" << std::endl;
	delete Wi;
	delete Wcat;

	return (0);
}
