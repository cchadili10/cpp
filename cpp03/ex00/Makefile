# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 12:08:27 by hchadili          #+#    #+#              #
#    Updated: 2025/02/23 11:43:02 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CXX = c++
CXXFLAGS = -Wall -Wall -Wextra -std=c++98
SRC = main.cpp ClapTrap.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) 
fclean: clean
	rm -f $(NAME)