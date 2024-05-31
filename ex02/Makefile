# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amak <amak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 19:30:31 by amak              #+#    #+#              #
#    Updated: 2024/05/31 19:30:58 by amak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RepetitiveWork

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			main.cpp
			
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)
	
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)
	
clean:
	@rm -f $(OBJECTS)
	@echo Deleted object files!

fclean: clean
	@rm -f $(NAME)
	@echo Deleted executable!

re: fclean all

.PHONY: all bonus clean fclean re