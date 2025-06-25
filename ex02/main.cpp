/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feljourb <feljourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:40:11 by feljourb          #+#    #+#             */
/*   Updated: 2025/06/25 11:21:20 by feljourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("robot");
	frag.attack("target");
	frag.takeDamage(30);
	frag.beRepaired(20);
	frag.highFivesGuys();
}
