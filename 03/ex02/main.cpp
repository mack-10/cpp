/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:38:13 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/22 15:19:48 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int	main(void) {
	FragTrap fragtrap("Alex");

	std::cout << std::endl;
	
	fragtrap.highFivesGuys();

	std::cout << std::endl;

	return 0;
}