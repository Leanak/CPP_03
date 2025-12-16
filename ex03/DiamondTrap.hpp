/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:19:09 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 18:21:32 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap : public ClapTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		//Default constructor
		DiamondTrap(void);
		//Name constructor
		DiamondTrap(std::string name);
		//Copy constructor
		DiamondTrap(const DiamondTrap &other);
		//Destructor
		~DiamondTrap(void);
		//Copy assignment operator
		DiamondTrap	&operator=(const DiamondTrap &other);
};