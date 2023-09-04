/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:16:25 by jholl             #+#    #+#             */
/*   Updated: 2022/05/18 12:17:57 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

public:
	Brain();
	Brain(Brain const & to_cpy);
	Brain & operator=(Brain const & rhs);
	virtual ~Brain();

protected:
	std::string _ideas[100];

};

#endif
