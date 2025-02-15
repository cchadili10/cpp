# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 12:25:07 by hchadili          #+#    #+#              #
#    Updated: 2025/02/15 15:40:47 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CXX = g++
CXXFLAGS = -Wall -Wall -Wextra -std=c++98
SRC = main.cpp Harl.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp Harl.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) 
fclean: clean
	rm -f $(NAME)