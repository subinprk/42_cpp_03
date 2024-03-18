/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:30:10 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 21:26:41 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ~ScavTrap();
        ScavTrap(ScavTrap const &copy);
        void    guardGate();
        ScavTrap &operator=(const ScavTrap &copy);
};

#endif