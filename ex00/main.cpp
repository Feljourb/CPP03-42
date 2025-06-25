/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feljourb <feljourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:40:11 by feljourb          #+#    #+#             */
/*   Updated: 2025/06/22 14:43:28 by feljourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap obj("robot");

	obj.attack("bob");
	obj.takeDamage(5);
	obj.beRepaired(2);
	return (0);
}
