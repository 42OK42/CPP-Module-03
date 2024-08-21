/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:38:39 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/20 19:06:16 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/DiamondTrap.hpp"

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

	FragTrap frag("Fraggy");
	frag.showData();
	frag.attack("target");
	frag.showData();
	frag.highFivesGuys();

	std::cout << "-----------------------------" << std::endl;

	DiamondTrap diamond("Diamondy");
	diamond.showData();
	diamond.attack("target");
	diamond.showData();
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.whoAmI();

	std::cout << "-----------------------------" << std::endl;

	DiamondTrap diamondCopy(diamond);
	diamondCopy.showData();

	std::cout << "-----------------------------" << std::endl;

	DiamondTrap diamondAssign("AnotherDiamond");
	diamondAssign = diamond;
	diamondAssign.showData();

	return 0;
}