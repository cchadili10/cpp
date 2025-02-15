/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:13:21 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/16 15:50:49 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void    Zombie::announce(void)
{
    std::cout << name << " :  BraiiiiiiinnnzzzZ... " << std::endl;   
}

std::string Zombie::get_name(void)
{
    return name;
}

void Zombie::set_name(std::string name)
{
    this->name = name;    
}