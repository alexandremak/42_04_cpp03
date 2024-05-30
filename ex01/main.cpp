/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 03:04:54 by amak              #+#    #+#             */
/*   Updated: 2024/05/30 03:43:03 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap charlie("CHARLIE");
	ScavTrap delta;

	delta = ScavTrap("DELTA");

	charlie.attack(delta.getName());
	std::cout << charlie.getName() << " has " << charlie.getEP()
		<< " energy points!" << std::endl; 
	
	delta.takeDamage(charlie.getAD());
	std::cout << delta.getName() << " has " << delta.getHP()
		<< " health points!" << std::endl; 
	delta.beRepaired(10);
	std::cout << delta.getName() << " has " << delta.getHP()
		<< " health points!" << std::endl; 
	std::cout << delta.getName() << " has " << delta.getEP()
		<< " energy points!" << std::endl; 

	delta.takeDamage(19);
	std::cout << delta.getName() << " has " << delta.getHP()
		<< " health points!" << std::endl; 

	delta.takeDamage(10);
	std::cout << delta.getName() << " has " << delta.getHP()
		<< " health points!" << std::endl; 

	delta.beRepaired(10);
	std::cout << delta.getName() << " has " << delta.getHP()
		<< " health points!" << std::endl;
	std::cout << delta.getName() << " has " << delta.getEP()
		<< " energy points!" << std::endl; 
}
