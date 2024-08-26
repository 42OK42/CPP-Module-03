/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:38:39 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/20 19:03:59 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/FragTrap.hpp"

int main()
{
	ClapTrap clap("Clappy");
	clap.showData();
	clap.attack("target");

	std::cout << "-----------------------------" << std::endl;

	FragTrap frag("Fraggy");
	frag.showData();
	frag.attack("target");
	frag.showData();
	frag.highFivesGuys();

	std::cout << "-----------------------------" << std::endl;

	FragTrap fragCopy(frag);
	fragCopy.showData();

	std::cout << "-----------------------------" << std::endl;

	FragTrap fragAssign("AnotherFrag");
	fragAssign = frag;
	fragAssign.showData();

	return 0;
}