/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 03:04:54 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 20:13:31 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap charlie("CHARLIE");
	ScavTrap delta;

	delta = ScavTrap("DELTA");

	std::cout << std::endl;
	charlie.printHealth();
	charlie.printEnergy();
	charlie.printDamage();
	std::cout << "------------" << std::endl;
	delta.printHealth();
	delta.printEnergy();
	delta.printDamage();
	std::cout << std::endl;

	charlie.attack(delta.getName());
	charlie.printEnergy();
	
	delta.takeDamage(charlie.getAD());
	delta.printHealth();
	delta.beRepaired(10);
	delta.printHealth();
	delta.printEnergy();

	delta.takeDamage(80);
	delta.printHealth();

	delta.takeDamage(10);
	delta.printHealth();

	delta.beRepaired(10);
	delta.takeDamage(1000);
	delta.printHealth();
	delta.printEnergy();
}
