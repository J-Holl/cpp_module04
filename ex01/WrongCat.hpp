/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:46:15 by jholl             #+#    #+#             */
/*   Updated: 2022/05/18 11:55:55 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat:
public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(WrongCat const & to_cpy);
		~WrongCat();

		WrongCat & operator=(WrongCat const & rhs);
		void	makeSound(void) const;

	private:

};

#endif
