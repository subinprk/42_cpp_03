/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:19:26 by subpark           #+#    #+#             */
/*   Updated: 2024/03/15 20:39:21 by subpark          ###   ########.fr       */
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
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(const std::string name): _name(name), _hit_points(10),
                            _energy_points(10), _attack_damage(10);
        ClapTrap() = default;
        std::string get_name();
};