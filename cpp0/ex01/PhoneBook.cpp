/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:30:54 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/08 18:35:46 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	ft_check_input(std::string line, int type, int *check)
{
	if (type == 1)
	{
		for (unsigned int i = 0; i < line.length(); i++)
		{
			if (!isalpha(line[i]))
			{
				std::cout << "erorr: \n";
				return 0;	
			}
		}
	}
	else if (type == 2)
	{
		for (unsigned int i = 0; i < line.length(); i++)
		{
			if (!isdigit(line[i]))
			{
				std::cout << "erorr: \n";
				return 0;
			}
		}
	}
	else
	{
		if(line.length() == 0)
		{
			std::cout << "erorr: \n";
			return 0;
		}
	}
	*check = 0;
	return 1;
}

void	PhoneBook::add_contact(std::string line, int x)
{
	int check = 1;
	switch (x)
	{
	case 0:
		do
		{
			std::cout << "give me First Name :";
			getline(std::cin, line);
			if(std::cin.eof() || line == "EXIT")
				exit(1);
			if(ft_check_input(line , 1, &check))
				contact_op[count].set_FirstName(line);
		}
		while (check);
		break;
	case 1:
		do
		{
			std::cout << "give me Last Name :";
			getline(std::cin, line);
			if(std::cin.eof() || line == "EXIT")
				exit(1);
			if(ft_check_input(line , 1, &check))
				contact_op[count].set_LastName(line);
		} while (check);
		break;
	case 2: 
		do
		{
			std::cout << "give me Nickname :";
			getline(std::cin, line) ;
			if(std::cin.eof() || line == "EXIT")
				exit(1);
			if(ft_check_input(line , 3, &check))
				contact_op[count].set_Nickname(line);
		} while (check);
		
		break;
	case 3:
		do
		{
			std::cout << "give me  Phone Number :";
			getline(std::cin, line);
			if(std::cin.eof() || line == "EXIT")
				exit(1);
			else if (ft_check_input(line , 2, &check))
				contact_op[count].set_PhonNmber(line);
		} while (check);
		
		break;
	case 4: 
		do
		{
			std::cout << "give me darkest secret ;) :";
			getline(std::cin, line);
			if(std::cin.eof() || line == "EXIT")
				exit(1);
			if (ft_check_input(line , 3, &check))
				contact_op[count].set_darkestSecret(line);
		} while (check);
		
		break;
	default:
		break;
	}
}

void	printf_limits(std::string line)
{
	if (line.length() >= 10)
		std::cout << line.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << line.substr(0, 10);
}

void PhoneBook::search_contact(void)
{
	std::cout << "\n     index| FirstName|  LastName|   Nikname\n";
	std::cout << "--------------------------------------------\n";
	for (int i = 0; i < 8; i++)
	{
		if (!contact_op[i].get_FirstName().empty())
		{
			std::cout << std::setw(10) << i + 1 << '|';
			printf_limits(contact_op[i].get_FirstName());
			std::cout << "|";
			printf_limits(contact_op[i].get_LastName());
			std::cout << "|";
			printf_limits(contact_op[i].get_Nickname());
			std::cout << "\n--------------------------------------------\n";
		}
	}
}
void PhoneBook::display_contact()
{
	std::string line;
	do
	{
		std::cout << "give index of contact to display : ";
		getline(std::cin, line);
		if (std::cin.eof() || line == "EXIT")
			exit(1);
		if (line.length() == 1 && (line[0] >= '0' && line[0] <= '8'))
		{
			int holder = atoi(line.c_str());
			if (!contact_op[holder - 1].get_FirstName().empty())
			{
				contact_op[holder - 1].ft_display_info();
				break;
			}
			std::cout << "this index not valid \n";
		}

	} while (1);
}
int PhoneBook::get_count()
{
	return count;
}
void PhoneBook::set_count(int count)
{
	this->count = count;
}
void PhoneBook::increase_count()
{
	count++;
}
