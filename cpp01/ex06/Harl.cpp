/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:42:29 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/15 18:13:40 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout <<"I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money."<< std::endl;
    std::cout <<"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNINING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levles[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level == levles[i])
            index = i;
    }
    switch (index)
    {
    case 0: 
        debug();
        break;
    case 1: 
        info();
        break;
    case 2: 
        warning();
        break;
    case 3: 
        error();
        break;
    default: 
        std::cerr << "[Probably complaining about insignificant problems]" << std::endl;
        break;
    }
}