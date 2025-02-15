/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:00:09 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/19 15:53:28 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *test;
    int N=20;
    test = zombieHorde(N,"hamza");
    for (int i = 0; i < N; i++)
    {
        std::cout << test[i].get_name() << std::endl ;
    }
    delete(test);
    
    return 0;
}
