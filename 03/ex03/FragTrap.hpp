/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:37:12 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/22 15:21:13 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
	
	public:
		/* Orthodox canonical */
		FragTrap();	// Constructor
		FragTrap(std::string name);
		FragTrap(const FragTrap & src); // Copy constructor
		virtual ~FragTrap(); // Destructor
		FragTrap & operator = (const FragTrap & src); // Operator overloading

		/* Subject */
		virtual void	highFivesGuys(void);
};

#endif