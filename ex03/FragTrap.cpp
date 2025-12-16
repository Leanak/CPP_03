/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:05:10 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 19:02:07 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys high-fives!!!!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
	}
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	std::cout << "FragTrap: Name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}