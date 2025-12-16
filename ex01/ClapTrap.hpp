/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:44:11 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 16:11:51 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	ClapTrap
{
	protected:
		std::string	_name;
		int	_hitPoints = 10;
		int	_energyPoints = 10;
		int	_attackDamage = 0;
	public:
		ClapTrap(void);
		//Constructeur default
		ClapTrap(std::string name);
		//Constructeur copy
		ClapTrap(const ClapTrap &other);
		//Operateur =
		ClapTrap	&operator=(const ClapTrap &other);
		//Destructeur
		~ClapTrap(void);
		//getter
		std::string	getName(void) const;
		int	getAttackDamage(void) const;
		int	getEnergyPoints(void) const;
		int	getHitPoints(void) const;
		//member function
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
