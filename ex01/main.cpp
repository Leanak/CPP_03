/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:07:45 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 15:48:14 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	dragon("Dragon");
	ScavTrap	chevalier("Chevalier");
	ClapTrap	princess("Princess");
	

	chevalier.guardGate();
/* 	std::cout << "AVANT ATTAQUE: " << std::endl;
	std::cout << "Dragon name: " << dragon.getName() << std::endl;
	std::cout << "Dragon energy points: " << dragon.getEnergyPoints() << std::endl;
	std::cout << "Dragon hit points: " << dragon.getHitPoints() << std::endl;
	std::cout << "Dragon attack damage: " << dragon.getAttackDamage() << std::endl;
	
	std::cout << "\n\n";

	std::cout << "Chevalier name: " << chevalier.getName() << std::endl;
	std::cout << "Chevalier energy points: " << chevalier.getEnergyPoints() << std::endl;
	std::cout << "Chevalier hit points: " << chevalier.getHitPoints() << std::endl;
	std::cout << "Chevalier attack damage: " << chevalier.getAttackDamage() << std::endl;
	
	std::cout << "\n\n";
	
	std::cout << "APRES ATTAQUE" << std::endl;
	chevalier.attack("princess");
	std::cout << "Chevalier name: " << chevalier.getName() << std::endl;
	std::cout << "Chevalier energy points: " << chevalier.getEnergyPoints() << std::endl;
	std::cout << "Chevalier hit points: " << chevalier.getHitPoints() << std::endl;
	std::cout << "Chevalier attack damage: " << chevalier.getAttackDamage() << std::endl;

	std::cout << "\n\n";
	
	std::cout <<"PRINCESS TAKE DAMAGE" << std::endl;
	princess.takeDamage(chevalier.getAttackDamage());
	std::cout << "Princess energy points: " << princess.getEnergyPoints() << std::endl;
	std::cout << "Princess hit points: " << princess.getHitPoints() << std::endl;
	std::cout << "Princess attack damage: " << princess.getAttackDamage() << std::endl;
	
	std::cout << "\n\n";
	std::cout << "Princess attaque" << std::endl;

	princess.attack(dragon.getName()); */
	return 0;
}

