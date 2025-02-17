# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/16 17:35:25 by hchadili          #+#    #+#              #
#    Updated: 2025/02/16 17:35:44 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
CXX = g++
CXXFLAGS = -Wall -Wall -Wextra -std=c++98
SRC = main.cpp Fixed.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) 
fclean: clean
	rm -f $(NAME)