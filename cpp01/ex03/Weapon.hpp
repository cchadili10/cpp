/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:24:29 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/13 15:31:02 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(const std::string& type);
    const std::string& getType(void);
    void setType(const std::string& type);
    ~Weapon();
};




#endif