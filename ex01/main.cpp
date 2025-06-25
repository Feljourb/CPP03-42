/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feljourb <feljourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:40:11 by feljourb          #+#    #+#             */
/*   Updated: 2025/06/24 23:06:07 by feljourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Robo");
	scav.attack("target");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();
}
