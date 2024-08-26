/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:02:52 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 13:36:15 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap("Default"), FragTrap("Default"), _name("Default")
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &Name) : ClapTrap(Name + "_clap_name"), ScavTrap(Name), FragTrap(Name), _name(Name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	if (this != &copy)
	{
		ClapTrap::operator=(copy);
		ScavTrap::operator=(copy);
		FragTrap::operator=(copy);
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
}

void DiamondTrap::showData() const
{
	ClapTrap::showData();
	std::cout << "DiamondTrap Name: " << _name << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name: " << _name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::_name << std::endl;
}