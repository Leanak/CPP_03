/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:18:06 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 19:02:11 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in guard mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
		if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		if (_energyPoints <= 0)
			std::cout << "Impossible to attack: no energy points left" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "Impossible to attack: no hit poins left" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name
			  << " attacks " << target
			  << ", causing " << _attackDamage << " points of damage"
			  << std::endl;
}

//Operator =
ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
	}
	return (*this);
}

//Constructeur copie
ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}
//Constructeur avec name
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_hitPoints = 100;
	std::cout << "ScavTrap: Name constructor called" << std::endl;

}

//Default constructor
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

//Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}




