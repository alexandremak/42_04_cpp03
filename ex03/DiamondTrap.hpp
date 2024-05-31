/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 22:57:28 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 23:43:11 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

# define INIT_DT_HP INIT_FT_HP
# define INIT_DT_EP INIT_ST_EP
# define INIT_DT_AD INIT_FT_AD

const std::string BLUE = "\033[34m";

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_name;
		
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &otherDiamondTrap);
		DiamondTrap &operator=(const DiamondTrap &otherDiamondTrap);
		~DiamondTrap();

		void	attack(const std::string& target);
		void	whoAmI();
};

#endif
