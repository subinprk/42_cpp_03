/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:19:26 by subpark           #+#    #+#             */
/*   Updated: 2024/04/26 17:25:37 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP
#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hit_points;
        int         _energy_points;
        int         _attack_damage;
    public:
        ClapTrap(const std::string &name);
        ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap &operator=(const ClapTrap &right);
        std::string get_name();
        int         get_energy_po();
        int         get_hit_po();
        int         get_attack_da();
        int         put_attack_da(int   attack_po);
        void        put_name(std::string name);
        void        put_hit_points(unsigned int hit);
        void        put_energy_points(unsigned int energy);
};

#endif