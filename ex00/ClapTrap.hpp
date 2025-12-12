/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:08:17 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/12 18:02:33 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	ClapTrap
{
	private:
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
	public:
		//Constructeur
		ClapTrap(std::string name);
		//Constructeur de copie
		ClapTrap(const ClapTrap &other);
		//Destructeur
		~ClapTrap(void);
		//assignment =
		ClapTrap	&operator=(const ClapTrap &other);
		//getters
		std::string	getName(void) const;
		int	getHitPoints(void) const;
		int	getEnergypoints(void) const;
		int	getAttackDamage(void) const;
		//Setter pour test
		void	setEnergyPoints(const unsigned int value);
		//Fonctions membres
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

