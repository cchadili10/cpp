/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:21:33 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/15 12:14:02 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void ft_replace(std::string &line, std::string s1, std::string s2)
{
    int  check = line.find(s1);
    if ( check == -1)
        return;
    line.erase(check, s1.length());
    line.insert(line.begin() + check ,s2.begin(), s2.end());
}

int main(int argc, char *argv[])
{
    std::string line;
    std::string fileName;
    std::string s1;
    std::string s2;
    
    if(argc != 4)
    {
        std::cerr << "not valid";
        return 1;
    }
    fileName = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    std::ifstream file(fileName.c_str());
    if (!file)
    {
        std::cerr << "file not found";
        return 2;
    }
    std::ofstream file_copy(fileName.append(".replace").c_str());
    if (!file_copy) 
    {
        file.close();
        std::cerr << "Error opening file!" << std::endl;
        return 3;
    }
    while (getline(file, line))
    {
        ft_replace(line, s1, s2);
        file_copy << line << std::endl;
    }
    file.close();
    file_copy.close();
    return 0;
}
    