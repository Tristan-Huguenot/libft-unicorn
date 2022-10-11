# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 21:51:01 by thugueno          #+#    #+#              #
#    Updated: 2022/10/11 18:46:07 by thugueno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft-unicorn

LIBFTDIR	=	../libft/

LIBFT		=	libft.a

HEADER		=	libft.h

INCLUDE		=	-lbsd -L./include/ -lft

SRCDIR		=	src/

SRC			=	src/isalpha.c		\
				src/isdigit.c		\
				src/isalnum.c		\
				src/isascii.c		\
				src/isprint.c		\
				src/strlen.c		\
				src/memset.c		\
				src/bzero.c			\
				src/memcpy.c		\
				src/memmove.c		\
				src/strlcpy.c		\
				src/strlcat.c		\
				src/toupper.c		\
				src/tolower.c		\
				src/strchr.c		\
				src/strrchr.c		\
				src/strncmp.c		\
				src/memchr.c		\
				src/memcmp.c		\
				src/strnstr.c		\
				src/atoi.c			\
				src/calloc.c		\
				src/strdup.c		\
				src/substr.c		\
				src/strjoin.c		\
				src/strtrim.c		\
				src/split.c			\
				src/itoa.c			\
				src/strmapi.c		\
				src/striteri.c		\
				src/putchar_fd.c	\
				src/putstr_fd.c		\
				src/putendl_fd.c	\
				src/putnbr_fd.c		\

BONUS_SRC	=	src/lstnew.c		\
				src/lstadd_front.c	\
				src/lstsize.c		\

OBJDIR		=	obj/

OBJ			=	${SRC:${SRCDIR}%.c=${OBJDIR}%.o}

BONUS_OBJ	=	${BONUS_SRC:${SRCDIR}%.c=${OBJDIR}%.o}

BINARYDIR	=	binary/

BINARY		=	${SRC:${SRCDIR}%.c=${BINARYDIR}%}

BBINARY		=	${BONUS_SRC:${SRCDIR}%.c=${BINARYDIR}%}

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

${OBJDIR}%.o	::	${SRCDIR}%.c
				${CC} ${CFLAGS} -c $< -o $@

${BINARYDIR}%	::	${OBJDIR}%.o
				${CC} ${CFLAGS} ${@:${BINARYDIR}%=${OBJDIR}%.o} ${INCLUDE} -o $@

${NAME}:		libft ${OBJ} ${BINARY}

libft:
				make -C ${LIBFTDIR}
				@cp ${LIBFTDIR}${LIBFT} ./include/${LIBFT}
				@cp ${LIBFTDIR}${HEADER} ./include/${HEADER}

libft_b:
				make bonus -C ${LIBFTDIR}
				@cp ${LIBFTDIR}${LIBFT} ./include/${LIBFT}

bonus:			${NAME} libft_b ${BONUS_OBJ} ${BBINARY}

m:				${NAME} ${BINARY}
				@${foreach binary,${BINARY},valgrind ${binary} | cat -v;}

b:				bonus
				@${foreach binary,${BBINARY},valgrind ${binary} | cat -v;}

all:			${NAME}

clean:
				make clean -C ${LIBFTDIR}
				${RM} ./include/${HEADER}
				${RM} ./include/${LIBFT}
				${RM} ${OBJ}
				${RM} ${BONUS_OBJ}

fclean:			clean
				${RM} ${LIBFTDIR}${LIBFT}
				${RM} ${BINARY} ${BBINARY}

re:				fclean all

.PHONY:	all clean fclean re
