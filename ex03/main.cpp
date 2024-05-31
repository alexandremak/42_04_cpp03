/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 22:57:08 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 23:54:24 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap golf("GOLF");
	DiamondTrap hotel;

	hotel = DiamondTrap("HOTEL");

	std::cout << std::endl;
	golf.printHealth();
	golf.printEnergy();
	golf.printDamage();
	std::cout << "------------" << std::endl;
	hotel.printHealth();
	hotel.printEnergy();
	hotel.printDamage();
	std::cout << std::endl;

	golf.attack(hotel.getName());
	golf.printEnergy();
	
	hotel.takeDamage(golf.getAD());
	hotel.printHealth();
	hotel.beRepaired(10);
	hotel.printHealth();
	hotel.printEnergy();

	golf.highFivesGuys();
	hotel.takeDamage(80);
	hotel.printHealth();

	hotel.takeDamage(10);
	hotel.printHealth();

	hotel.beRepaired(10);
	hotel.takeDamage(1000);
	hotel.highFivesGuys();
	hotel.printHealth();
	hotel.printEnergy();

	golf.whoAmI();
	hotel.whoAmI();
}
