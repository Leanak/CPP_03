/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:57:21 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 18:00:58 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class	Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*inventory[4];
	public:
		Character(void);
		Character(const Character &other);
		virtual ~Character(void);
		Character(const std::string name);
		Character &operator=(const Character &other);
		std::string	const &getName(void) const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

