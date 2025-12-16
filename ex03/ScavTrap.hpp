/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:40:50 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 16:15:04 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &other);
		void	attack(const std::string &target);
		void	guardGate(void);
};
