/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:33:32 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 18:06:23 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice: public AMateria
{
	private:
	public:
		virtual void use(ICharacter &target);
		AMateria* clone(void) const;
		Ice &operator=(const Ice &other);
		Ice(const Ice &other);
		Ice(void);
		~Ice(void);
};
