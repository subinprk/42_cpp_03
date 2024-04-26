/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:30:17 by subpark           #+#    #+#             */
/*   Updated: 2024/04/26 17:39:21 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
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

void ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap Attacking: ";
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << _name << " is already dead " << std::endl;
        return ;
    }
    if (_attack_damage > 0)
    std::cout << _name <<" attacks "<< target <<", causing "
        << _attack_damage << std::endl;
    _energy_points --;
}

// void ScavTrap::takeDamage(unsigned int amount)
// {
//     std::cout <<  "ScavTrap Taking Damage: ";
//     if (_hit_points <= 0 || _energy_points <= 0)
//     {
//         std::cout << _name << " is already dead " << std::endl;
//         return ;
//     }
//     std::cout << _name << " take " << amount << " attack damage\n"; 
//     _hit_points = _hit_points - amount;
// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
//     std::cout << "ScavTrap is Reparing: ";
//     if (_hit_points <= 0 || _energy_points <= 0)
//     {
//         std::cout << _name << " is already dead " << std::endl;
//         return ;
//     }
//     std::cout << _name << " repaired " << amount << " damage\n";
//     _hit_points = _hit_points + amount;
//     _energy_points --;
// }