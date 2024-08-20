/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:38:39 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/20 12:38:22 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrap.hpp"

int main()
{
	ClapTrap clap("Clappy");
	clap.showData();

	clap.attack("target");
	clap.showData();

	clap.takeDamage(5);
	clap.showData();

	clap.beRepaired(3);
	clap.showData();

	for (int i = 0; i < 10; ++i)
		clap.attack("target");
	clap.showData();

	clap.beRepaired(5);
	clap.showData();

	return 0;
}