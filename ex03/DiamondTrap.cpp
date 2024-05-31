/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 23:15:54 by amak              #+#    #+#             */
/*   Updated: 2024/06/01 00:05:26 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(), _name("Untitled") {
	ClapTrap::_name = "Untitled_clap_name";
	this->_hp = INIT_DT_HP;
	this->_ep = INIT_DT_EP;
	this->_ad = INIT_DT_AD;
	std::cout << BLUE << "[DIAMONDTrap]: Default constructed called" << RESET
		<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hp = INIT_DT_HP;
	this->_ep = INIT_DT_EP;
	this->_ad = INIT_DT_AD;
	std::cout << BLUE << "[DIAMONDTrap]: Name constructed called" << RESET
		<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &otherDiamondTrap) {
	std::cout << BLUE << "[DIAMONDTrap]: Copy constructed called" << RESET
		<< std::endl;
	*this = otherDiamondTrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &otherDiamondTrap) {
	std::cout << BLUE << "[DIAMONDTrap]: Copy assignment constructed called"
		<< RESET << std::endl;
	if (this != &otherDiamondTrap) {
		this->_name = otherDiamondTrap._name;
		ClapTrap::_name = this->_name + "_clap_name";
		//ClapTrap::_name = otherDiamondTrap.ClapTrap::_name;
		this->_hp = otherDiamondTrap._hp;
		this->_ep = otherDiamondTrap._ep;
		this->_ad = otherDiamondTrap._ad;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << BLUE << "[DIAMONDTrap]: Destructor called" << RESET << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {
	std::cout << BLUE  << "[DIAMONDTrap]: attack called" << RESET << std::endl;
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << BLUE  << "[DIAMONDTrap]: whoAmI called" << RESET << std::endl;
	std::cout << "My DiamondTrap name is " << this->_name << "." << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}
