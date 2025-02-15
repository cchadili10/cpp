/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:14:23 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/16 15:58:29 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie_a;
    zombie_a = newZombie("FOOOOOO");
    randomChump("ZOOOOOO");
    zombie_a->announce();
    delete(zombie_a);
    return 0;
}
