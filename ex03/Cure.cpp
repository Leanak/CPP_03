/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:42:16 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 17:54:54 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target->getName() << "'s wound" << " *" << std::endl;
}


AMateria* Cure::clone(void) const
{
	return (new Cure());
}


Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		this->_type = other._type; 
	}
	std::cout << "Cure: copy assignment operator" << std::endl;
	return (*this);
}

Cure::Cure(const Cure &other)
{
	*this = other;
	std::cout << "Cure: copy constructor" << std::endl;
}

Cure::Cure(void)
{
	this->_type = "cure";
	std::cout << "Cure: constructor" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure: desturctor" << std::endl;
}