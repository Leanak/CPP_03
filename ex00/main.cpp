/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:41:00 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/16 15:45:54 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap dragon("Dragon");
	ClapTrap princess("Princess");

	dragon.attack("Princess");
	std::cout << "APRES ATTAQUE" << std::endl;
	std::cout << "Dragon EnergyPoints: " << dragon.getEnergyPoints() << std::endl;
	std::cout << "Dragon Hitpoint: " << dragon.getHitPoints() << std::endl;
	std::cout << "Dragon AttackDamage: " << dragon.getAttackDamage() << std::endl;

	/*std::cout << "princess EnergyPoints: " << princess.getEnergypoints() << std::endl;
	std::cout << "princess Hitpoint: " << princess.getHitPoints() << std::endl;
	std::cout << "princess AttackDamage: " << princess.getAttackDamage() << std::endl;

	std::cout << "\n\n\n";

	std::cout << "APRES ATTAQUE" << std::endl;
	dragon.attack("Princess");
	
	std::cout << "Dragon EnergyPoints: " << dragon.getEnergypoints() << std::endl;
	std::cout << "Dragon Hitpoint: " << dragon.getHitPoints() << std::endl;
	std::cout << "Dragon AttackDamage: " << dragon.getAttackDamage() << std::endl;

	std::cout << "princess EnergyPoints: " << princess.getEnergypoints() << std::endl;
	std::cout << "princess Hitpoint: " << princess.getHitPoints() << std::endl;
	std::cout << "princess AttackDamage: " << princess.getAttackDamage() << std::endl;

	std::cout << "\n\n\n";

	std::cout << "APRES TAKE DAMAGE" << std::endl;
	princess.takeDamage(dragon.getAttackDamage());
	std::cout << "princess EnergyPoints: " << princess.getEnergypoints() << std::endl;
	std::cout << "princess Hitpoint: " << princess.getHitPoints() << std::endl;
	std::cout << "princess AttackDamage: " << princess.getAttackDamage() << std::endl;

	std::cout << "\n\n\n";

	std::cout << "APRES REPAIRED DRAGON" << std::endl;
	dragon.beRepaired(1);
	std::cout << "Dragon EnergyPoints: " << dragon.getEnergypoints() << std::endl;
	std::cout << "Dragon Hitpoint: " << dragon.getHitPoints() << std::endl;
	std::cout << "Dragon AttackDamage: " << dragon.getAttackDamage() << std::endl;

	std::cout << "\n\n\n";
	std::cout << "APRES REPAIRED DRAGON" << std::endl;
	princess.beRepaired(1);
	std::cout << "princess EnergyPoints: " << princess.getEnergypoints() << std::endl;
	std::cout << "princess Hitpoint: " << princess.getHitPoints() << std::endl;
	std::cout << "princess AttackDamage: " << princess.getAttackDamage() << std::endl; */
	
	return (0);
}