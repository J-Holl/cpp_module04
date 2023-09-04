SRCS	= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= make_some_noise

COMPILER	= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= none

HEADER	= none

all:	$(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $<  -o $(<:.cpp=.o)

.PHONY:	clean fclean re
