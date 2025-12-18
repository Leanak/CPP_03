/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:40:17 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 18:06:18 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure: public AMateria
{
	private:

	public:
		void use(ICharacter &target);
		AMateria* clone(void) const;
		Cure &operator=(const Cure &other);
		Cure(const Cure &other);
		Cure(void);
		~Cure(void);
};
