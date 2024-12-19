/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.c++                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:30:54 by hchadili          #+#    #+#             */
/*   Updated: 2024/11/23 20:06:51 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	public:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhonNmber;
		std::string darkestSecret;
};

class PhoneBook {
	public:
		Contact contact_op[8];
		int	count;
};

int	ft_check_input(std::string line, int type, int *check)
{
	if (type == 1)
	{
		for (int i = 0; i < line.length(); i++)
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
		for (int i = 0; i < line.length(); i++)
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

void	dispaly_mess(PhoneBook& phone_book, std::string line, int x)
{
	int check = 1;
	switch (x)
	{
	case 0:
		do
		{
			std::cout << "give me First Name :";
			getline(std::cin, line);
			if(std::cin.eof())
				exit(1);
			if(ft_check_input(line , 1, &check))
				phone_book.contact_op[phone_book.count].FirstName = line;
		}
		while (check);
		break;
	case 1:
		do
		{
			std::cout << "give me Last Name :";
			getline(std::cin, line);
			if(std::cin.eof())
				exit(1);
			if(ft_check_input(line , 1, &check))
				phone_book.contact_op[phone_book.count].LastName = line;
		} while (check);
		break;
	case 2: 
		do
		{
			std::cout << "give me Nickname :";
			getline(std::cin, line);
			if(std::cin.eof())
				exit(1);
			if(ft_check_input(line , 3, &check))
				phone_book.contact_op[phone_book.count].Nickname = line;
		} while (check);
		
		break;
	case 3:
		do
		{
			std::cout << "give me  Phone Number :";
			getline(std::cin, line);
			if(std::cin.eof())
				exit(1);
			else if (ft_check_input(line , 2, &check))
				phone_book.contact_op[phone_book.count].PhonNmber = line;
		} while (check);
		
		break;
	case 4: 
		do
		{
			std::cout << "give me darkest secret ;) :";
			getline(std::cin, line);
			if(std::cin.eof())
				exit(1);
			if (ft_check_input(line , 3, &check))
				phone_book.contact_op[phone_book.count].darkestSecret = line;
		} while (check);
		
		break;
	default:
		break;
	}
}
void ft_display_info(std::string line)
{
	
}
void	printf_limits(std::string line)
{
	if (line.length() >= 10)
		std::cout << line.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << line.substr(0, 10);
}
int main(int argc, char const *argv[])
{		
	std::string line;
	PhoneBook phone_book;
	
	phone_book.count = 0;
	int a= 5;
	
	while (1)
	{
		std::cout << "your phone book :";
		getline(std::cin, line);
		if(std::cin.eof())
			exit(1);
		if (line == "ADD")
		{
			for (int i = 0; i < 5; i++)
				dispaly_mess(phone_book, line, i);
			phone_book.count++;
			if(phone_book.count == 8)
				phone_book.count = 0;
		}
		else if(line == "SEARCH")
		{
			std::cout << "\n     index| FirstName|  LastName|   Nikname\n";
			std::cout << "--------------------------------------------\n";
			for (int i = 0; i < 8; i++)
			{
				if(!phone_book.contact_op[i].FirstName.empty())
				{
					std::cout << std::setw(10) << i+1 << '|';
					printf_limits(phone_book.contact_op[i].FirstName);
					std::cout << "|";
					printf_limits(phone_book.contact_op[i].LastName);
					std::cout << "|";
					printf_limits(phone_book.contact_op[i].Nickname);
					std::cout << "\n--------------------------------------------\n";
				}
			}
			do
			{
				std::cout << "give index of contact to display : ";
				getline(std::cin, line);
				if(std::cin.eof())
					exit(1);
				if (line.length() == 1)
				{
					int holder = atoi(line.c_str());
					if ( holder != 0 && holder != 9);
					{
						
					}
				}
			} while (1);
			
			
			
			std::cout << atoi(line.c_str());
			ft_display_info(line);
		}
		else if (line == "EXIT")
			break;
	}
	return 0;
}
