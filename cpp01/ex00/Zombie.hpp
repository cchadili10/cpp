/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:05:16 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/16 15:47:40 by hchadili         ###   ########.fr       */
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
        void    set_name(std::string name);
        std::string get_name(void);
        void    announce(void);
    
};
    Zombie* newZombie( std::string name );
    void    randomChump( std::string name );



#endif
