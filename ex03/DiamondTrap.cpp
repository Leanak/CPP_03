/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:21:40 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 18:24:24 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"



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
}

//Name constructor

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