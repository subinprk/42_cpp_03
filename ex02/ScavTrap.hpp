/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:30:10 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 20:30:02 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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