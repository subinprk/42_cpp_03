/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:19:41 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 20:38:42 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"), _hit_points(100), _energy_points(100), _attack_damage(30)
{
	std::cout << "ClapTrap " << this->_name << " created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hit_points(100), _energy_points(100), _attack_damage(30)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copied\n";
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of ClapTrap " << _name << std::endl;
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

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "operator = executed\n";
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_energy_points = copy._attack_damage;
    return (*this);
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

void ClapTrap::put_name(std::string name)
{
    _name = name;
}

void ClapTrap::put_hit_points(unsigned int hit)
{
    _hit_points = hit;
}

void ClapTrap::put_energy_points(unsigned int energy)
{
    _energy_points = energy;
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