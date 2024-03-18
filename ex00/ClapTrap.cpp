/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:19:41 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 16:27:16 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "have to put name when you call constructor \n";
    _name = "";
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << "Constructor \n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of " << _name << std::endl;
}

std::string ClapTrap::get_name()
{
    return (_name);
}

int  ClapTrap::get_hit_po(){
    return ( _hit_points);
}

int ClapTrap::get_attack_da(){
    return (_attack_damage);
}

int ClapTrap::get_energy_po(){
    return (_energy_points);
}

void ClapTrap::attack(const std::string &target)
{
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

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << _name << " is already dead " << std::endl;
        return ;
    }
    std::cout << _name << " take " << amount << " attack damage\n"; 
    _hit_points = _hit_points - amount;
    // if (_hit_points <= 0)
    //     std::cout << _name << " is dead " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << _name << " is already dead " << std::endl;
        return ;
    }
    std::cout << _name << " repaired " << amount << " damage\n";
    _hit_points = _hit_points + amount;
    _energy_points --;
}

int ClapTrap::put_attack_da(int attack_po)
{
    if (attack_po > _hit_points){
        std::cout << "attacking points are higher than hit points \n";
        return (0);
    }
    _attack_damage = _attack_damage + attack_po;
    return (1);
}