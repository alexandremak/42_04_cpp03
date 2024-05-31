/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:30:03 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 20:28:48 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	FragTrap echo("ECHO");
	FragTrap foxtrot;

	foxtrot = FragTrap("FOXTROT");

	std::cout << std::endl;
	echo.printHealth();
	echo.printEnergy();
	echo.printDamage();
	std::cout << "------------" << std::endl;
	foxtrot.printHealth();
	foxtrot.printEnergy();
	foxtrot.printDamage();
	std::cout << std::endl;

	echo.attack(foxtrot.getName());
	echo.printEnergy();
	
	foxtrot.takeDamage(echo.getAD());
	foxtrot.printHealth();
	foxtrot.beRepaired(10);
	foxtrot.printHealth();
	foxtrot.printEnergy();

	echo.highFivesGuys();
	foxtrot.takeDamage(80);
	foxtrot.printHealth();

	foxtrot.takeDamage(10);
	foxtrot.printHealth();

	foxtrot.beRepaired(10);
	foxtrot.takeDamage(1000);
	foxtrot.highFivesGuys();
	foxtrot.printHealth();
	foxtrot.printEnergy();
}
