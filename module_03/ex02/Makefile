# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romain <romain@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 14:13:53 by romain            #+#    #+#              #
#    Updated: 2023/05/17 14:13:54 by romain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

NAME = FragTrap

OBJDIR = .objFiles

OBJ	= $(addprefix $(OBJDIR)/, $(FILES:=.o))

FILES = main ClapTrap ScavTrap FragTrap

HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRC	= $(FILES:=.cpp)

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(OBJ) -o $(NAME)
	@printf "$(GREEN)- Executable ready.\n$(RESET)"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: clean all

.PHONY: all clean fclean re