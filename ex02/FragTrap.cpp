/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feljourb <feljourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:00:41 by feljourb          #+#    #+#             */
/*   Updated: 2025/06/25 11:47:08 by feljourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy construcror called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other)
	{
		FragTrap::operator=(other);
	}
	std::cout << "FrapTrap assignment constructor called." << std::endl; 
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "FragTrap " << name  << " attacks " << target
			<< ", causing " << attackDamage << " points of damage! " << std::endl;
	}
	else
		std::cout << "FragTrap " << name << " can't attack (no energy or hp)" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << " request a five high! ✋" << std::endl;
}
