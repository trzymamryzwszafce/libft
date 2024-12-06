# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 17:33:18 by szmadeja          #+#    #+#              #
#    Updated: 2024/12/06 16:04:07 by szmadeja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Defines where the source files are
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c/
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c/
	ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft.split.c ft_strdup.c/
	ft_strjoin.c ft_strlncmp ft_strnstr.c ft_strtrim.c ft_substr.c

# Shortcut to do the same but with the object files
OBJECTS = $(SOURCES:c=o)

# Defines the compiler and its flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

all: $(NAME)

# Puts the .o files into a library
$(NAME): $(OBJECTS)
        ar rcs $(NAME) $(OBJECTS)

# Builds the .o files. $@ = target name
$(OBJECTS): $(SOURCES)
        $(CC) $(CFLAGS) -c $(@:o=c) -o $@

# Deletes .o files
clean:
        rm -f $(OBJECTS)

# Deletes object files, then the output file
fclean: clean
        rm -f $(NAME)

# Rebuilds, so first deletes all then builds again
re: fclean all

# Tells Make that these commands don't build files with those names
.PHONY: all clean fclean re
