NAME = find

SRCS = main.cpp 

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