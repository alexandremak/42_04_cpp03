/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:34:13 by amak              #+#    #+#             */
/*   Updated: 2024/05/30 02:49:30 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap Alpha("ALPHA");
	ClapTrap Beta;

	Beta = ClapTrap("BETA");
	
	Alpha.attack(Beta.getName());
	std::cout << Alpha.getName() << " has " << Alpha.getEP()
		<< " energy points!" << std::endl; 
	
	Beta.takeDamage(Alpha.getAD());
	Beta.beRepaired(10);
	std::cout << Beta.getName() << " has " << Beta.getHP()
		<< " health points!" << std::endl; 
	std::cout << Beta.getName() << " has " << Beta.getEP()
		<< " energy points!" << std::endl; 

	Beta.takeDamage(19);
	std::cout << Beta.getName() << " has " << Beta.getHP()
		<< " health points!" << std::endl; 

	Beta.takeDamage(10);
	std::cout << Beta.getName() << " has " << Beta.getHP()
		<< " health points!" << std::endl; 

	Beta.beRepaired(10);
	std::cout << Beta.getName() << " has " << Beta.getHP()
		<< " health points!" << std::endl;
	std::cout << Beta.getName() << " has " << Beta.getEP()
		<< " energy points!" << std::endl; 
}
