# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 15:10:11 by lenakach          #+#    #+#              #
#    Updated: 2025/12/16 18:18:13 by lenakach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CC = c++
CFLAGS = -Wall -Wextra -Werror --std=c++98 -I.

SRC = ClapTrap.cpp \
	  ScavTrap.cpp \
	  FragTrap.cpp \
	  main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test
