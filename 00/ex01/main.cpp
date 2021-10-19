/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:41 by sujeon            #+#    #+#             */
/*   Updated: 2021/10/19 21:47:14 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main() {
	Phonebook phonebook;
	std::string input;

	while (true) {
		std::getline(std::cin, input);
	
		if (input == "ADD") {
			phonebook.add_contact();
		}
		else if (input == "SEARCH") {
			std::cout << input << std::endl;
		} 
		else if (input == "EXIT") {
			std::cout << input << std::endl;
			break ;
		}
	}

	return 0;
}