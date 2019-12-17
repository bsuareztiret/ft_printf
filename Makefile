# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcabrol <mcabrol@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 18:12:42 by mcabrol           #+#    #+#              #
#    Updated: 2019/09/18 14:00:57 by mcabrol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBFT = ./libft
HEADER = ./includes
DIR_S = ./src
DIR_O = ./obj
MAIN = ./src/main.c
SANATIZE = -fsanitize=address
COMPILED = $(LIBFT_COMPILED) $(SOURCES)
SRCS = $(addprefix $(DIR_S)/,$(SOURCES))
OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))
SOURCES =	ft_printf.c \
			ft_motor.c \
			ft_buffer.c \
			ft_char.c \
			ft_float.c \
			ft_hexa.c \
			ft_string.c \
			ft_octal.c \
			ft_unsigned.c \
			ft_integer.c \
			ft_is.c \
			ft_parse.c \
			ft_tool.c \
			ft_init.c \
			ft_tool.c \
			ft_convert_float.c \
			ft_itoa_b.c \
			ft_ltoa.c \
			ft_debbug.c \
			ft_colors.c

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "libftprintf.a \033[0;32mcreated.\033[0m"~

$(DIR_O)/%.o: $(DIR_S)/%.c
	@mkdir -p obj
	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

compile: $(NAME)
	@$(CC) $(MAIN) -o ft_printf $(NAME)
	@echo "ft_printf \033[0;32mcreated.\033[0m"~

clean:
	@make clean -C $(LIBFT)
	@-/bin/rm -f $(OBJS)
	@-/bin/rm -rf $(DIR_O)
	@echo "All files .o have been \033[1;31mdeleted\033[0m."

fclean: clean
	@make fclean -C $(LIBFT)
	@-/bin/rm -f $(NAME)
	@-/bin/rm -f ft_printf
	@echo "$(NAME) has been \033[1;31mdeleted\033[0m."

re : fclean all

.PHONY.: all clean fclean re
