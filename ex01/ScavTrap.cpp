/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feljourb <feljourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:38:43 by feljourb          #+#    #+#             */
/*   Updated: 2025/06/24 23:10:41 by feljourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructed! " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor is called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap assignment constructor called!" << std::endl; 
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destroyed! " << std::endl;    
}

void	ScavTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ScavTrap " << name << " attack " << target << " causing " << attackDamage << " point of damage !" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " can't attack (No energy or HP)!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
