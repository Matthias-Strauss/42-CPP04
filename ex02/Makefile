# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 17:02:44 by mstrauss          #+#    #+#              #
#    Updated: 2025/02/14 17:53:30 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	wof

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -Wunused -std=c++17 -stdlib=libc++
INC			=   -I$(CURDIR)

vpath %.hpp includes

SRC 		=	main.cpp\
				AAnimal.cpp\
				Dog.cpp\
				Cat.cpp\
				WrongAnimal.cpp\
				WrongCat.cpp\
				Brain.cpp
				
HEADER		=	AAnimal.hpp\
				Dog.hpp\
				Cat.hpp\
				WrongAnimal.hpp\
				WrongCat.hpp\
				Brain.hpp

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