# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 17:02:44 by mstrauss          #+#    #+#              #
#    Updated: 2024/09/30 19:23:12 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	wof

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++17 -stdlib=libc++
INC			=   -I$(CURDIR)

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

OBJ 		=	 $(SRC:.cpp=.o)

RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re