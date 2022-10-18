# constant
SEP_P           :=      "------------------------------------    ----------"
SEP_S           :=      "....................................    .........."

NAME		:=	hi_this_is_brain

CXX		:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Werror -Wextra

SRCSPATH	:=	.

RM		:=	rm -rf
VAL		:=	valgrind --leak-check=full --show-leak-kinds=all

SRCS		:=	main.cpp

OBJS		:=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:
			$(RM) $(OBJS)

fclean		:
			make clean
			$(RM) $(OBJS)

re		:
			make fclean
			make all

test		:
			make all
			@echo $(SEP_P)
			$(VAL) ./$(NAME)
			@echo $(SEP_P)

.PHONY		:	all clean fclean re test
