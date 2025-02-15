/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:42:22 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/15 18:08:00 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const *argv[])
{

    Harl harl;
    std::string levle;    
    if (argc != 2)
    {
        std::cerr << "takes one parameter!" << std::endl;
        return 1;
    }
    levle = argv[1];
    harl.complain(levle);
    return 0;
}
