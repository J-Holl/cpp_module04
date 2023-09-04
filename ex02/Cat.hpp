/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:25:19 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 11:20:54 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Cat:
public Animal
{
	public:

		Cat();
		Cat(Cat const & to_cpy);
		virtual ~Cat();

		Cat & operator=(Cat const & rhs);
		void	makeSound(void) const;

	private:
		Brain* _brain;

};

#endif
