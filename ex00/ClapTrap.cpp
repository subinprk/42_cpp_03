/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:19:41 by subpark           #+#    #+#             */
/*   Updated: 2024/03/15 20:40:51 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::get_name()
{
    return (_name);
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << _name <<" attacks "<< target <<", causing"
        << ;
    
}