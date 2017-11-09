#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddufour <ddufour@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/12 17:05:44 by ddufour           #+#    #+#              #
#    Updated: 2016/12/02 13:52:10 by ddufour          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fdf

RM = rm -f

CCF = gcc -Wall -Werror -Wextra

LIBS = -LLibs/libft/ #-LLibs/minilibx_macos4/

SRCS =	srcs/bresenham.c \
		srcs/creat_lst.c \
		srcs/main.c

OBJ = $(SRCS:.c=.o)

$(NAME) : $(OBJ)
	@make -s -C libs/libft
	@echo "Libft Compiled"
	@make -s -C libs/minilibx_macos_sierra
	@echo "Minilibx Compiled"
	@$(CCF) $(LIBS) -lft -lmlx -framework OpenGL -framework AppKit -o $@ $^
	@echo "Fdf Compiled"

all : $(NAME)

%.o: %.c
	@$(CCF) -o $@ -c $<

clean :
	@make clean -s -C libs/libft
	@echo ".o Libft delete"
	@make clean -s -C libs/minilibx_macos_sierra
	@echo ".o Minilibx delete"
	@$(RM) $(OBJ)
	@echo ".o Fdf delete"

fclean : clean
	@$(RM) libs/libft/libft.a
	@echo "libft.a delete"
	@$(RM) libs/minilibx_macos_sierra/libmlx.a
	@echo "libmlx.a delete"
	@$(RM) $(NAME)
	@echo "fdf delete"

re : fclean all