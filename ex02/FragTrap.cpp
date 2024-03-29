/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:45:33 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 21:27:27 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor\n";
}

FragTrap::FragTrap(const std::string &name):ScavTrap(name)
{
    std::cout << "Constructor from FragTrap called\n";
}

FragTrap::FragTrap(const FragTrap &copy):ScavTrap(copy)
{
    std::cout << "FragTrap copide\n";
   // *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << get_name() << " destructed\n";
}

void    FragTrap::highFiveGuys(void)
{
    if (get_hit_po() <= 0)
        std::cout << "Cannot HighFive because " << get_name()
            << "is dead\n";
    else
        std::cout << "FragTrap from ClapTrap " << get_name()
            <<" says HighFive\n";
}

FragTrap &FragTrap::operator= (const FragTrap &copy)
{
    std::cout << "Assignment operator FragTrap is called\n";
    ScavTrap::operator=(copy);
    return (*this);
}

