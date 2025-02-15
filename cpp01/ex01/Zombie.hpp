/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:00:14 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/16 16:11:52 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
   void set_name(std::string name);
   std::string get_name(void);
};



Zombie* zombieHorde( int N, std::string name );


#endif