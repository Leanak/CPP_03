/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:29:43 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 18:09:10 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <iostream>

class	AMateria
{
	protected:
		std::string	_type;
	public:
		virtual void use(ICharacter &target);
		virtual	AMateria* clone(void) const = 0;
		std::string	const	&getType(void) const;
		AMateria &operator=(const AMateria &other);
		AMateria(const AMateria &other);
		AMateria(std::string const &type);
		AMateria(void);
		virtual ~AMateria(void);
};
