/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 23:11:24 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 20:02:57 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Untitled"), _hp(INIT_HP), _ep(INIT_EP), _ad(0) {
	std::cout << RED << "[CLAPTrap]: Default constructed called" << RESET
		<< std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hp(INIT_HP), _ep(INIT_EP), _ad(0) {
	std::cout << RED << "[CLAPTrap]: Name constructed called" << RESET
		<< std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &otherClapTrap) {
	std::cout << RED << "[CLAPTrap]: Copy constructed called" << RESET
		<< std::endl;
	*this = otherClapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &otherClapTrap) {
	std::cout << RED << "[CLAPTrap]: Copy assignment constructed called" << RESET 
		<< std::endl;
	if (this != &otherClapTrap) {
		this->_name = otherClapTrap._name;
		this->_hp = otherClapTrap._hp;
		this->_ep = otherClapTrap._ep;
		this->_ad = otherClapTrap._ad;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "[CLAPTrap]: Destructor called" << RESET << std::endl;
}

std::string ClapTrap::getName() const {
	return (this->_name);
}

unsigned int	ClapTrap::getHP() const {
	return (this->_hp);
}

unsigned int	ClapTrap::getEP() const {
	return (this->_ep);
}

unsigned int	ClapTrap::getAD() const {
	return (this->_ad);
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << RED << "[CLAPTrap]: attack called" << RESET << std::endl;
	if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " is dead! "
			"Cannot attack!"  << std::endl;
	else if (this->_ep == 0)
		 std::cout << "ClapTrap " << this->_name << "has no energy points!"
		 	<< std::endl;
	else {
		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
		<< " causing " << this->_ad << " points of damage!" << std::endl;
	}
}

void 	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << RED << "[CLAPTrap]: takeDamage called" << RESET << std::endl;
	if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " cannot take damage "
			"because it's already dead!" << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " takes " << amount
			<< " points of damage!" << std::endl;
		if (this->_hp <= amount) {
			this->_hp = 0;
			std::cout << "ClapTrap " << this->_name << " has died!" << std::endl;
		}
		else
			this->_hp -= amount;
	}
}

void 	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << RED << "[CLAPTrap]: beRepaired called" << RESET << std::endl;
	if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " is dead! "
			"Cannot be repaired!"  << std::endl;
	else if (this->_ep == 0)
		 std::cout << "ClapTrap " << this->_name << "has no energy points!"
		 	<< std::endl;
	else {
		this->_hp += amount;
		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " was repaired " << amount
		<< " points of heath!" << std::endl;
	}
}

void	ClapTrap::printHealth() const {
	std::cout << this->_name << " has " << this->_hp << " health points!"
		<< std::endl; 
}

void	ClapTrap::printEnergy() const {
	std::cout << this->_name << " has " << this->_ep << " energy points!"
		<< std::endl; 	
}

void	ClapTrap::printDamage() const {
	std::cout << this->_name << " has " << this->_ad << " attack damage points!"
		<< std::endl; 	
}
