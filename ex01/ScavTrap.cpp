/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:30:17 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 20:40:47 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"Default constructor from ScavTrap\n";
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
    //put_name(name);
    std::cout<<"Constructor from ScavTrap called\n";
    // put_hit_points(100);
    // put_energy_points(50);
    // put_attack_da(20);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap is called \n";
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
    std::cout << "ScavTrap copy called\n";
}

void    ScavTrap::guardGate()
{
    if (get_hit_po() <= 0)
        std::cout << "HP is low, cannot go Gate Keeping mode\n";
    else
        std::cout << get_name() << " ScavTrap is on Guard Mode\n" ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "Assignment operator ScavTrap is called\n";
    ClapTrap::operator=(copy);
    return (*this);
}