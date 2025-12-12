/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:11:59 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/12 18:03:23 by lenakach         ###   ########.fr       */
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

//Setter
void	ClapTrap::setEnergyPoints(const unsigned int value)
{
	this->_energyPoints = value;
}

//getters
int	ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

int	ClapTrap::getEnergypoints(void) const
{
	return (_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

//Assignment =
ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergypoints();
		_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

//Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}


//constructeur par default
ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default constructor called" << std::endl;
}

//Destructeur
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

