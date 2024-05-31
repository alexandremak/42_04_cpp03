/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 03:05:56 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 23:51:19 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

# define INIT_ST_HP 100
# define INIT_ST_EP 50
# define INIT_ST_AD 20

const std::string GREEN = "\033[32m";

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &otherScavTrap);
		ScavTrap &operator=(const ScavTrap &otherScavTrap);
		~ScavTrap();
		
		void attack(const std::string& target);
		void guardGate();
};

#endif
