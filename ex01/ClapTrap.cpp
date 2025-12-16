/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:48:04 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 16:12:03 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		if (_energyPoints <= 0)
			std::cout << "Impossible to attack: no energy points left" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "Impossible to attack: no hit poins left" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name
			  << " attacks " << target
			  << ", causing " << _attackDamage << " points of damage"
			  << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << "has been attack and lost " << amount
			  << " hit points of damage!"
			  << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
	{
		std::cout << "Impossible to be repaired: no energy points left" << std::endl;
		return;
	}
	_energyPoints -= 1;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " has repaired "
			  << amount << "point!" << std::endl;
}

//getter
std::string	ClapTrap::getName(void) const
{
	return (_name);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

int	ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

//operator =
ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_energyPoints = other._energyPoints;
		_hitPoints = other._hitPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	return (*this);
}

//Constructeur default
ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

//Copy constructeur
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = other;
}
//Constructeur avec name
ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	std::cout << "ClapTrap: Name constructor called" << std::endl;
}

//Destructeur
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}