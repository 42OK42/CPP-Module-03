/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:10:28 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 13:55:19 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(const std::string &Name);
		virtual ~ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &copy);

		void guardGate();
		void attack(const std::string &target);
};

#endif