/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:46:55 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 16:26:00 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal no_more_instance;
	
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

	return (0);
}
