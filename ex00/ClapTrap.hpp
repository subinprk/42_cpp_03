/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:19:26 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 16:09:47 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CLAPTRAP_CPP
#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int         _hit_points;
        int         _energy_points;
        int         _attack_damage;
    public:
        ClapTrap(const std::string name);
        ClapTrap();
        ~ClapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string get_name();
        int         get_energy_po();
        int         get_hit_po();
        int         get_attack_da();
        int         put_attack_da(int   attack_po);
};