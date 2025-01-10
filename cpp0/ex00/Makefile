# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 12:58:33 by hchadili          #+#    #+#              #
#    Updated: 2025/01/10 13:08:37 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone
CXX = g++
CXXFLAGS = -Wall -Wall -Wextra -std=c++98
SRC = megaphone.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJECTS) 
	
fclean: clean
	rm -f $(NAME)