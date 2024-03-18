/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:45:40 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 21:26:08 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap :public ScavTrap
{
    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();
        void    highFiveGuys(void);
        FragTrap &operator = (const FragTrap &copy);
};

#endif