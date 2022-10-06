# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 21:51:01 by thugueno          #+#    #+#              #
#    Updated: 2022/10/06 15:45:28 by thugueno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft-unicorn

LIBFTDIR	=	../libft/

LIBFT		=	libft.a

HEADER		=	libft.h

INCLUDE		=	-L./include/ -lft

SRCDIR		=	src/

SRC			=	src/isalpha.c	\
				src/isdigit.c	\
				src/isalnum.c	\
				src/isascii.c	\
				src/isprint.c	\
				src/strlen.c	\
				src/memset.c	\
				src/bzero.c		\
				src/memcpy.c	\

OBJDIR		=	obj/

OBJ			=	${SRC:${SRCDIR}%.c=${OBJDIR}%.o}

BINARYDIR	=	binary/

BINARY		=	${SRC:${SRCDIR}%.c=${BINARYDIR}%}

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

m:				${BINARY}
				@${foreach binary,${BINARY},${binary} | cat -v;}

all:			${NAME}

clean:
				make clean -C ${LIBFTDIR}
				${RM} ./include/${HEADER}
				${RM} ./include/${LIBFT}
				${RM} ${OBJ}

fclean:			clean
				${RM} ${LIBFTDIR}${LIBFT}
				${RM} ${foreach file,${SRC},${SRC:${SRCDIR}%.c=${BINARYDIR}%}}

re:				fclean all

.PHONY:	all clean fclean re
