/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:02:49 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 16:18:39 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &other);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap &operator=(const FragTrap &other);
		void	highFivesGuys(void);
};