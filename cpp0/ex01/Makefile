# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 12:58:37 by hchadili          #+#    #+#              #
#    Updated: 2025/01/10 13:10:17 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PhoneBook
CXX = g++
CXXFLAGS = -Wall -Wall -Wextra -std=c++98
SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp PhoneBook.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) 
fclean: clean
	rm -f $(NAME)
