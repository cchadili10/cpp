/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:00:17 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/16 17:18:10 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie;
    zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie[i].set_name(name);
        
    }
    return zombie;
}