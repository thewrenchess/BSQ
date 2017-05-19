# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/01 21:38:15 by ppatil            #+#    #+#              #
#    Updated: 2016/08/01 21:38:15 by ppatil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

C_FLAGS = -Wall -Wextra -Werror

OUT = bsq

OPT_FLAG = -O2

SRC_DIR = src/

INC_DIR = inc/

PMAIN = $(SRC_DIR)ft_bsq_main.c

SOURCES =	$(SRC_DIR)ft_atoi.c \
			$(SRC_DIR)ft_bsq_check_min.c \
			$(SRC_DIR)ft_bsq_destroy.c \
			$(SRC_DIR)ft_bsq_init.c \
			$(SRC_DIR)ft_bsq_print.c \
			$(SRC_DIR)ft_bsq_solve.c \
			$(SRC_DIR)ft_bsq_verify.c \
			$(SRC_DIR)ft_count_digits.c \
			$(SRC_DIR)ft_is_numeric.c \
			$(SRC_DIR)ft_is_space.c \
			$(SRC_DIR)ft_istring_append.c \
			$(SRC_DIR)ft_istring_destroy.c \
			$(SRC_DIR)ft_istring_init.c \
			$(SRC_DIR)ft_istring_resize.c \
			$(SRC_DIR)ft_itostring.c \
			$(SRC_DIR)ft_itostring_b.c \
			$(SRC_DIR)ft_putchar.c \
			$(SRC_DIR)ft_putint_b.c \
			$(SRC_DIR)ft_putnbr.c \
			$(SRC_DIR)ft_putstr.c \
			$(SRC_DIR)ft_strcmp.c \
			$(SRC_DIR)ft_strfill.c \
			$(SRC_DIR)ft_strfind.c \
			$(SRC_DIR)ft_string_append_char.c \
			$(SRC_DIR)ft_string_append_str.c \
			$(SRC_DIR)ft_string_destroy.c \
			$(SRC_DIR)ft_string_init.c \
			$(SRC_DIR)ft_string_print.c \
			$(SRC_DIR)ft_string_readin.c \
			$(SRC_DIR)ft_string_resize.c \
			$(SRC_DIR)ft_strlen.c \
			$(SRC_DIR)ft_strncpy.c \
			$(SRC_DIR)ft_vec3_make.c

all : $(OUT)

$(OUT) :
	$(CC) $(C_FLAGS) $(OPT_FLAG) -o $(OUT) $(PMAIN) $(SOURCES) -I$(INC_DIR)

clean :
	#meh

fclean :
	rm -f $(OUT)

re : fclean all
