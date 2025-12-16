/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:21:40 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 19:01:50 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Fonction membre
void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

//Copy assignment operator
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		this->_hitPoints = other._hitPoints;	
	}
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	return (*this);
}

//Name constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->_name = name;

	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap: Name constructor called" << std::endl;
}

//Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = other;
}

//Default constructor
DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

//Destructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}