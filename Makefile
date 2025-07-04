# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 16:38:02 by jade-vla          #+#    #+#              #
#    Updated: 2025/07/03 16:12:03 by jade-vla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJ_DIR = obj
LIB_DIR = libft
PRINT_DIR = ft_printf
LIB_ADD_DIR = libft_additions

LIB_FILES =		ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

LIB_ADD_FILES =	ft_atol.c \
				ft_atoi_syntax.c

PRINT_FILES =	ft_printf.c \
				ft_printf_d.c \
				ft_printf_p.c \
				ft_printf_u.c \
				ft_printf_c.c \
				ft_printf_s.c \
				ft_printf_x.c

LIB_SRC = $(addprefix $(LIB_DIR)/, $(LIB_FILES))
PRINT_SRC = $(addprefix $(PRINT_DIR)/, $(PRINT_FILES))
LIB_ADD_SRC = $(addprefix $(LIB_ADD_DIR)/, $(LIB_ADD_FILES))
SRC = $(LIB_SRC) $(PRINT_SRC) $(LIB_ADD_SRC)

# Create flat object names in ../obj (e.g., ../obj/ft_strlen.o)
OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

# Compile rule (object filename is flat, source has full path)

$(OBJ_DIR)/%.o: $(LIB_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I. -I$(LIB_DIR) -I$(PRINT_DIR) -c $< -o $@

$(OBJ_DIR)/%.o: $(LIB_ADD_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I. -I$(LIB_DIR) -I$(PRINT_DIR) -I$(LIB_ADD_DIR) -c $< -o $@

$(OBJ_DIR)/%.o: $(PRINT_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I. -I$(LIB_DIR) -I$(PRINT_DIR) -I$(LIB_ADD_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
