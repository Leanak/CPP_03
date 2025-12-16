/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:49:12 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 16:14:37 by lenakach         ###   ########.fr       */
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
		//Constructeur
		ClapTrap(std::string name);
		//Constructeur de copie
		ClapTrap(const ClapTrap &other);
		//Destructeur
		~ClapTrap(void);
		//assignment =
		ClapTrap	&operator=(const ClapTrap &other);
		//getter
		std::string	getName(void) const;
		int	getAttackDamage(void) const;
		int	getEnergyPoints(void) const;
		int	getHitPoints(void) const;
		//Fonctions membres
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
