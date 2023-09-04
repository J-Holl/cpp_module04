/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:16:17 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 11:22:30 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{

	public:

		Animal();
		Animal(Animal const & to_cpy);
		virtual ~Animal();

		Animal &		operator=(Animal const & rhs);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	_type;

};

#endif
