/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:28:01 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 12:41:51 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap &src);

		void highFivesGuys(void);
};

#endif