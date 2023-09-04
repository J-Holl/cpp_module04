/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:46:55 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 13:27:11 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* array[6];
	for (int i=0; i < 6; i++)
	{
		if (i % 2)
		{
			array[i] = new Dog();
			array[i]->makeSound();
			std::cout << "dog" << std::endl;
		}
		else
		{
			array[i] = new Cat();
			array[i]->makeSound();
		}
	}
	for (int i=0; i < 6; i++)
		delete array[i];

	Cat toto_le_cat;
	{
		std::cout << "Deep copy needed, so toto_le_cat need his own Brain." << std::endl;
		Cat jojo_le_cat = toto_le_cat;
	}
	std::cout << "We now sure it's a deep copy cause toto_le_cat " <<
	"will not have double free when delete brain cause they each got one different."
	<< std::endl;

	return (0);
}
