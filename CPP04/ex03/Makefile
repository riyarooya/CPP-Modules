# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 08:22:38 by juhaamid          #+#    #+#              #
#    Updated: 2024/01/22 08:34:26 by juhaamid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

SRCS =  AMateria.cpp Character.cpp MateriaSource.cpp Cure.cpp Ice.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

all = ${NAME}

$(NAME): ${OBJS}
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean ${NAME}