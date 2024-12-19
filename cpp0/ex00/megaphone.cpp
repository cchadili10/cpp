/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:16:22 by hchadili          #+#    #+#             */
/*   Updated: 2024/11/09 14:52:04 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void ft_write_upeer(char *str)
{
	int x = -1;
	while (str[++x])
	{
		if(str[x] >= 'a' && str[x] <= 'z')
			std::cout << (char)(str[x] - 32);
		else
			std::cout << (char)str[x];
	}
}

int main(int argc, char const *argv[])
{
	int x;

	x = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[++x])
		{
			ft_write_upeer((char *)argv[x]);
			if (argc - 1  != x)
				std::cout << " ";
		}
		std::cout << "\n";
	}
	return 0;
}

