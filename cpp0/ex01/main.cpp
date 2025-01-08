/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:10:09 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/08 18:34:33 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{		
	std::string line;
	PhoneBook phone_book;
	
	phone_book.set_count(0);
	
	while (1)
	{
		std::cout << "your phone book :";
		getline(std::cin, line);
		if(std::cin.eof() || line == "EXIT")
        {
            exit(1);
        }
		if (line == "ADD")
		{
			for (int i = 0; i < 5; i++)
				phone_book.add_contact(line, i);
			phone_book.increase_count();
			if (phone_book.get_count() == 8)
				phone_book.set_count(0);
		}
		else if(line == "SEARCH")
		{
			phone_book.search_contact();
			phone_book.display_contact();
			
		}
		else if (line == "EXIT")
			break;
	}
	return 0;
}