# Variables
NAME = PhoneBook
CXX = g++
CXXFLAGS = -Wall -Wall -Wextra -std=c++98
SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJECTS = $(SRC:.cpp=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp PhoneBook.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(NAME)
