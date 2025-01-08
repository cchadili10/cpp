/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:31:16 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/08 18:33:51 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhonNmber;
		std::string darkestSecret;
	public:
		void set_FirstName(std::string FirstName);
		void set_LastName(std::string LastName);
		void set_Nickname(std::string Nickname);
		void set_PhonNmber(std::string PhonNumber);
		void set_darkestSecret(std::string darkestSecret);
		std::string get_FirstName();
		std::string get_LastName();
		std::string get_Nickname();
		std::string get_PhonNmber();
		std::string get_darkestSecret();
		void ft_display_info(void);
};

class PhoneBook {
	private:
		Contact contact_op[8];
		int	count;
		
	public:
		void set_count(int count);
		int	 get_count();
		void increase_count();
		void add_contact(std::string line, int i);
		void search_contact(void);
		void display_contact(void);
};

#endif
