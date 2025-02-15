# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 17:02:44 by mstrauss          #+#    #+#              #
#    Updated: 2025/02/15 18:30:48 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	interface

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -Wunused -std=c++17 -stdlib=libc++ -fsanitize=address -g
INC			=   -I$(CURDIR)

vpath %.hpp includes

SRC 		=	main.cpp\
				Ice.cpp\
				Cure.cpp\
				AMateria.cpp\
				Character.cpp\
				MateriaSource.cpp
				
HEADER		=	AMateria.hpp\
				Ice.hpp\
				Cure.hpp\
				Character.hpp\
				ICharacter.hpp\
				IMateriaSource.hpp\
				MateriaSource.hpp

OBJ_DIR		=	./obj
OBJ 		=	$(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HEADER) | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re