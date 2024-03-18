/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:19:28 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 21:27:44 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

int main()
{
    ClapTrap A("Marvin");
    ClapTrap B("Ford");
    ScavTrap C("Mattress");
    FragTrap D("Driver");
    if (!Attack_N_Attacked(A, B, 2))
        return (0);
    if (!Attack_N_Attacked(B, A, 3))
        return (0);
    C.guardGate();
    if (!Attack_N_Attacked(D, C, 20))
        return (0);
    D.highFiveGuys();
    A.beRepaired(3);
    if(!Attack_N_Attacked(A, B, 9))
        return (0);
    if (!Attack_N_Attacked(C, B, 10))
        return (0);
    // A.~ClapTrap();
    // B.~ClapTrap();
}