/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:08:19 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/23 11:42:36 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string name):name(name), HitPoiant(10), EnergyPoint(10), AttackDamage(0)
{}

ClapTrap::ClapTrap(const ClapTrap& other):name(other.name), HitPoiant(other.HitPoiant), EnergyPoint(other.EnergyPoint), AttackDamage(other.AttackDamage)
{}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        HitPoiant = other.HitPoiant;
        EnergyPoint = other.EnergyPoint;
        AttackDamage = other.AttackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (EnergyPoint > 0 && HitPoiant > 0)
    {
        EnergyPoint--;
        std::cout << "ClapTrap " << name << " attacks " << target << "causing " <<  AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    HitPoiant-= amount;
    if (HitPoiant < 0)
        HitPoiant = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " damage! Remaining HP: " << HitPoiant << std::endl;
    
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoint > 0 && HitPoiant > 0)
    {
        EnergyPoint--;
        HitPoiant += amount;
        std::cout << "ClapTrap " << name << " repaires itself for " << amount << " hit points " << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " has no energy or hit points left to beRepaired!" << std::endl;
}

ClapTrap::~ClapTrap(){}