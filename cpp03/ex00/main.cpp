/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:08:24 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/23 11:33:43 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("CT-01");
    claptrap.attack("Target-1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.takeDamage(10);
    claptrap.attack("Target-2");
    return 0;
}