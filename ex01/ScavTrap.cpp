/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 03:13:11 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 19:54:54 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_hp = INIT_ST_HP;
	_ep = INIT_ST_EP;
	_ad = INIT_ST_AD;
	std::cout << GREEN << "[SCAVTrap]: Default constructed called" << RESET
		<< std::endl;;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hp = INIT_ST_HP;
	_ep = INIT_ST_EP;
	_ad = INIT_ST_AD;
	std::cout << GREEN << "[SCAVTrap]: Name constructed called" << RESET
		<< std::endl;;
}

ScavTrap::ScavTrap(const ScavTrap &otherScavTrap) {
	std::cout << GREEN << "[SCAVTrap]: Copy constructed called" << RESET
		<< std::endl;
	*this = otherScavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &otherScavTrap) {
	std::cout << GREEN << "[SCAVTrap]: Copy assignment constructed called"
		<< RESET << std::endl;
	if (this != &otherScavTrap) {
		this->_name = otherScavTrap._name;
		this->_hp = otherScavTrap._hp;
		this->_ep = otherScavTrap._ep;
		this->_ad = otherScavTrap._ad;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << GREEN << "[SCAVTrap]: Destructor called" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << GREEN << "[SCAVTrap]: attack called" << RESET << std::endl;
	if (this->_hp == 0)
		std::cout << "ScavTrap " << this->_name << " is dead! "
		 	"Cannot attack!"  << std::endl;
	else if (this->_ep == 0)
		std::cout << "ScavTrap " << this->_name << "has no energy points!"
		 	<< std::endl;
	else {
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target 
		<< " causing " << this->_ad << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << GREEN << "[ScavTrap]: guardGate called" << RESET << std::endl;
	if (this->_hp == 0)
		std::cout << "ScavTrap " << this->_name << " is dead! "
		 	"Cannot activate Gate keeper mode!"  << std::endl;
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!"
		<< std::endl;
}
