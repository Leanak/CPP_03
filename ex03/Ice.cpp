/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:35:48 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 17:54:31 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target->getName() << "*" << std::endl; 
}

AMateria* Ice::clone(void) const
{
	return (new Ice());
}


Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Ice: Copy assignment operator" << std::endl;
}

Ice::Ice(const Ice &other)
{
	*this = other;
	std::cout << "Ice: copy constructor" << std::endl;
}

Ice::Ice(void)
{
	this->_type = "ice";
	std::cout << "Ice: constructor" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice: destructor" << std::endl;
}