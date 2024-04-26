/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:30:10 by subpark           #+#    #+#             */
/*   Updated: 2024/04/26 17:40:17 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ~ScavTrap();
        ScavTrap(ScavTrap const &copy);
        void    guardGate();
        void    attack(const std::string &target);
        // void    takeDamage(unsigned int amount);
        // void    beRepaired(unsigned int amount);
        ScavTrap &operator=(const ScavTrap &copy);
};