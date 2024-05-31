/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:20:01 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 19:20:33 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define INIT_HP 10
# define INIT_EP 10

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &otherClapTrap);
		ClapTrap &operator=(const ClapTrap &otherClapTrap);
		~ClapTrap();

		std::string		getName() const;
		unsigned int	getHP() const;
		unsigned int	getEP() const;
		unsigned int	getAD() const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	printHealth() const;
		void	printEnergy() const;
		void	printDamage() const;
};

#endif
