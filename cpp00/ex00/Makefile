# constant
SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."

NAME		:=	megaphone
IPATH		:=	.

CXX		:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Werror -Wextra
CPPFLAGS	:=	-MMD -I $(IPATH)

RM		:=	rm -rf
VAL		:=	valgrind --leak-check=full --show-leak-kinds=all

SRCS		:=	megaphone.cpp

OBJS		:=	$(SRCS:.cpp=.o)
DEPS		:=	$(OBJS:.o=.d)

all		:=	$(NAME)

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I $(IPATH) -o $(NAME)

clean		:
			$(RM) $(OBJS) $(DEPS)

fclean		:
			make clean
			$(RM) $(NAME)

re		:
			make fclean
			make all

test		:
			make
			@echo $(SEP_P)
			./$(NAME) "shhhhh... I think the students are asleep..."
			@echo $(SEP_P)
			./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
			@echo $(SEP_P)
			./$(NAME)
			@echo $(SEP_P)
			./$(NAME) Hello " 42 " "World"      "!" "§±"
			@echo $(SEP_P)

-include $(DEPS)

.PHONY		:	all clean fclean re test
