/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:45:33 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 21:04:27 by subpark          ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "FragTrap copide\n";
    *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << get_name() << " destructed\n";
}

FragTrap &FragTrap::operator= (const FragTrap &copy)
{
    std::cout << "Assignment operator FragTrap is called\n";
    ScavTrap::operator=(copy);
    return (*this);
}

