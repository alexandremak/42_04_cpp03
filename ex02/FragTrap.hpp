/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:29:44 by amak              #+#    #+#             */
/*   Updated: 2024/05/31 19:46:21 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

# define INIT_FT_HP 100
# define INIT_FT_EP 100
# define INIT_FT_AD 30

const std::string YELLOW = "\033[33m";

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &otherFragTrap);
		FragTrap &operator=(const FragTrap &otherFragTrap);
		~FragTrap();
	
		void	highFivesGuys(void);
};

#endif
