/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feljourb <feljourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 11:07:34 by feljourb          #+#    #+#             */
/*   Updated: 2025/06/24 23:09:53 by feljourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& n) : name(n) , hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " constructed!" << std::endl;
}

//copy constructor

ClapTrap::ClapTrap(const ClapTrap& other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "ClapTrap " << name << " copy constructor called" << std::endl;
}

//copy assignment operator

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap " << name << " assignment constructor called" << std::endl;

	return (*this);
}

//destructor

ClapTrap::~ClapTrap(){
	std::cout << "Claptrap " << name << " destroyed!" << std::endl;
}

//attack
void	ClapTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name  << " attacks " << target
			<< ", causing " << attackDamage << " points of damage! " << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " can't attack (no energy or hp)" << std::endl;
}

// TakeDamage
void	ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;

	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " take " << amount
		<< " damage! His HP now : " << hitPoints << std::endl; 
}

//beRepaired

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClatTrap " << name << " is repaired by " << amount
			<< ". HP now " << hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " can't repair (no energy or HP)!" << std::endl;
}
