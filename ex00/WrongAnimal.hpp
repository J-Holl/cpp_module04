/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:45:20 by jholl             #+#    #+#             */
/*   Updated: 2022/05/18 11:54:50 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const & to_cpy);
		virtual ~WrongAnimal();

		WrongAnimal &		operator=(WrongAnimal const & rhs);
		void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif
