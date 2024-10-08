/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:38:39 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/20 18:59:38 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ScavTrap.hpp"

int main()
{
	ClapTrap clap("Clappy");
	clap.showData();
	clap.attack("target");

	std::cout << "-----------------------------" << std::endl;

	ScavTrap scav("Scavvy");
	scav.showData();
	scav.attack("target");
	scav.showData();
	scav.guardGate();

	std::cout << "-----------------------------" << std::endl;

	ScavTrap scavCopy(scav);
	scavCopy.showData();

	std::cout << "-----------------------------" << std::endl;

	ScavTrap scavAssign("AnotherScav");
	scavAssign = scav;
	scavAssign.showData();

	return 0;
}