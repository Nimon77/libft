# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/14 17:40:05 by nsimon            #+#    #+#              #
#    Updated: 2019/11/13 16:38:39 by nsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	    = 	ft_memset.c\
		  		ft_bzero.c\
		  		ft_memcpy.c\
		  		ft_memccpy.c\
		  		ft_memmove.c\
		  		ft_memchr.c\
		  		ft_memcmp.c\
		  		ft_isalnum.c\
		  		ft_isalpha.c\
		  		ft_isascii.c\
		  		ft_isdigit.c\
		  		ft_isprint.c\
		  		ft_strchr.c\
		  		ft_strlcpy.c\
		  		ft_strlen.c\
		  		ft_strncmp.c\
		  		ft_strrchr.c\
		  		ft_tolower.c\
		  		ft_toupper.c\
		  		ft_strlcat.c\
		  		ft_strnstr.c\
		  		ft_atoi.c\
		  		ft_calloc.c\
		  		ft_strdup.c\
		  		ft_substr.c\
		  		ft_strjoin.c\
		  		ft_strtrim.c\
		  		ft_split.c\
		  		ft_itoa.c\
		  		ft_strmapi.c\
		  		ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c

BONUS_SRCS	=	${SRCS}\
				ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
	    		ft_lstlast.c\
	    		ft_lstadd_back.c\
		  		ft_lstdelone.c\
		  		ft_lstclear.c\
		  		ft_lstiter.c

PRE		    =	./

SRC			= 	${addprefix ${PRE}, ${SRCS}}

BONUS_SRC	=	${addprefix ${PRE}, ${SRCS} ${BONUS_SRCS}}

OBJS		= 	${SRC:.c=.o}

BONUS_OBJS	=	${BONUS_SRCS:.c=.o}

HEADERS		= 	./

NAME		= 	libft.a

CC			= 	gcc

CFLAGS		= 	-Wall -Wextra -Werror

RM			= 	rm -f

.c.o:
			${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${BONUS_OBJS}
			ar rc ${NAME} ${BONUS_OBJS}
			ranlib ${NAME}


.PHONY: all clean fclean re bonus
