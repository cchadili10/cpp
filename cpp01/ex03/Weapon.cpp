/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:24:25 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/13 18:16:56 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


void Weapon::setType(const std::string& type)
{
    this->type = type;
}
const std::string& Weapon::getType(void)
{
    return type;
}

Weapon::Weapon(const std::string& type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}
