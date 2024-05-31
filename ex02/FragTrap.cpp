/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:29:50 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 20:24:10 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_hp = INIT_FT_HP;
	_ep = INIT_FT_EP;
	_ad = INIT_FT_AD;
	std::cout << YELLOW << "[FRAGTrap]: Default constructed called" << RESET
		<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hp = INIT_FT_HP;
	_ep = INIT_FT_EP;
	_ad = INIT_FT_AD;
	std::cout << YELLOW << "[FRAGTrap]: Name constructed called" << RESET
		<< std::endl;;
}

FragTrap::FragTrap(const FragTrap &otherFragTrap) {
	std::cout << YELLOW << "[FRAGTrap]: Copy constructed called" << RESET
		<< std::endl;
	*this = otherFragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &otherFragTrap) {
	std::cout << YELLOW << "[FRAGTrap]: Copy assignment constructed called"
		<< RESET << std::endl;
	if (this != &otherFragTrap) {
		this->_name = otherFragTrap._name;
		this->_hp = otherFragTrap._hp;
		this->_ep = otherFragTrap._ep;
		this->_ad = otherFragTrap._ad;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << YELLOW << "[FRAGTrap]: Destructor called" << RESET << std::endl;
}
	
void	FragTrap::highFivesGuys(void) {
	std::cout << YELLOW << "[FRAGTrap]: highFiveGuys called" << RESET << std::endl;
	if (this->_hp == 0)
		std::cout << "FragTrap " << this->_name << " is dead! "
		 	"Cannot give hive five!"  << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " puts his hand to give a "
		"high five!" << std::endl;
}