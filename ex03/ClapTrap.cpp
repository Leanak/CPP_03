/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:11:59 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 16:14:46 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
	{
		std::cout << "Repaired impossible: no energy points left" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " has repaired "
			  << amount << "point!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " took " << amount
			  << " point of damage!" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		if (_energyPoints <= 0)
			std::cout << "Attack impossible: No energy points left" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "Attack impossible: No hit points left" << std::endl;
		return ;
	}	
	_energyPoints -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks "
			  << target << ", causing " << _attackDamage << " point of damage!"
			  << std::endl;
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

//Assignment =
ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

//Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}


//constructeur name
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name constructor called" << std::endl;
}

//Constructor default
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
}

//Destructeur
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}
