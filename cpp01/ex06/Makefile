# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 17:42:10 by hchadili          #+#    #+#              #
#    Updated: 2025/02/15 17:43:21 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HarlFilter
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