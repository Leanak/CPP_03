/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:31:43 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 17:39:52 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

AMateria &AMateria::operator=(const AMateria &other)
{
	(void)other;
	std::cout << "AMateria: copy assignment operator" << std::endl;
	return (*this);
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
	std::cout << "AMaterie: copy constructor" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "AMateria: constructor with param" << std::endl;
}

AMateria::AMateria(void)
{
	std::cout << "AMateria: constructor" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria: destructor" << std::endl;
}