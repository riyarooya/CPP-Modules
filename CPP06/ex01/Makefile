# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 09:32:50 by juhaamid          #+#    #+#              #
#    Updated: 2024/04/07 18:13:01 by juhaamid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialize

SRCS = main.cpp Serializer.cpp

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