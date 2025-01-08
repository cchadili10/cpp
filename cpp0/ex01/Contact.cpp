/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:19:30 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/08 17:39:01 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::set_FirstName(std::string FirstName)
{
    this->FirstName = FirstName;
}
void Contact::set_LastName(std::string LastName)
{
    this->LastName = LastName;
}
void Contact::set_Nickname(std::string Nickname)
{
    this->Nickname = Nickname;
}
void Contact::set_PhonNmber(std::string PhonNmber)
{
    this->PhonNmber = PhonNmber;
}
void Contact::set_darkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string Contact::get_FirstName()
{
    return FirstName;
}
std::string Contact::get_LastName()
{
    return LastName;
}
std::string Contact::get_Nickname()
{
    return Nickname;
}
std::string Contact::get_PhonNmber()
{
    return PhonNmber;
}
std::string Contact::get_darkestSecret()
{
    return darkestSecret;
}

void Contact::ft_display_info()
{
	std::cout << "First Name :" << FirstName << std::endl;
	std::cout << "Last Name :" << LastName << std::endl;
	std::cout << "NickName :" <<Nickname << std::endl; 
	std::cout << "Phone Number :" << PhonNmber << std::endl;
	std::cout << "Darkest Secret :" << darkestSecret << std::endl;
}