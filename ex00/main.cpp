/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:34:13 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 19:06:53 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap Alpha("ALPHA");
	ClapTrap Beta;

	Beta = ClapTrap("BETA");
	
	Alpha.attack(Beta.getName());
	Alpha.printEnergy();
	
	Beta.takeDamage(Alpha.getAD());
	Beta.beRepaired(10);
	Beta.printHealth();
	Beta.printEnergy();

	Beta.takeDamage(19);
	Beta.printHealth();

	Beta.takeDamage(10);
	Beta.printHealth();

	Beta.beRepaired(10);
	Beta.printHealth();
	Beta.printEnergy();

	Beta.attack(Alpha.getName());
}
