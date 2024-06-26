/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:19:28 by subpark           #+#    #+#             */
/*   Updated: 2024/04/26 17:38:23 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int Attack_N_Attacked(ClapTrap &attacker, ClapTrap &reciever, int attack_po)
{
    attacker.put_attack_da(attack_po);
    attacker.attack(reciever.get_name());
    reciever.takeDamage(attacker.get_attack_da());
    if (attacker.get_energy_po() <= 0 || attacker.get_hit_po() <= 0){
        std::cout << attacker.get_name() << " is Dead" << std::endl;
        return (0);
    }
    if (reciever.get_energy_po() <= 0 || reciever.get_hit_po() <= 0){
        std::cout << reciever.get_name() << " is Dead" << std::endl;
        return (0);
    }
    return(1);
}

int Attack_N_Attacked_ST(ScavTrap &attacker, ScavTrap &reciever, int attack_po)
{
    attacker.put_attack_da(attack_po);
    attacker.attack(reciever.get_name());
    reciever.takeDamage(attacker.get_attack_da());
    if (attacker.get_energy_po() <= 0 || attacker.get_hit_po() <= 0){
        std::cout << attacker.get_name() << " is Dead" << std::endl;
        return (0);
    }
    if (reciever.get_energy_po() <= 0 || reciever.get_hit_po() <= 0){
        std::cout << reciever.get_name() << " is Dead" << std::endl;
        return (0);
    }
    return(1);
}

int main()
{
    ClapTrap A("Marvin");
    ClapTrap B("Ford");
    ScavTrap C("Mattress");
    ScavTrap D = ScavTrap(C);
    if (!Attack_N_Attacked(A, B, 2))
        return (0);
    if (!Attack_N_Attacked(B, A, 3))
        return (0);
    A.beRepaired(3);
    C.guardGate();
    D.guardGate();
    if(!Attack_N_Attacked(A, B, 9))
        return (0);
    if (!Attack_N_Attacked(C, B, 10))
        return (0);
    if (!Attack_N_Attacked_ST(C, D, 5))
        return (0);
    // A.~ClapTrap();
    // B.~ClapTrap();
}