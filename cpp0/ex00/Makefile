# constant
SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."

NAME		:=	megaphone
CC		:=	c++
CFLAGS		:=	-MMD -Wall -Werror -Wextra
CPPFLAGS	:=	-std=c++98

IPATH		:=	.
OPATH		:=	obj
SRCSPATH	:=	.

RM		:=	rm -rf
VAL		:=	valgrind --leak-check=full --show-leak-kinds=all

SRCS		:=	megaphone.cpp

OBJS		:=	$(addprefix $(OPATH)/, $(SRCS:.cpp=.o))
DEPS		:=	$(OBJS:.o=.d)

vpath %.hpp	$(IPATH)
vpath $.cpp	$(SRCSPATH)
vpath %.o	$(OPATH)

all		:=	$(NAME)

$(OPATH)/%.o		:	%.cpp
			$(CC) $(CFLAGS) $(CPPFLAGS) -I $(IPATH) -c $< -o $@

$(NAME)		:	$(OBJS)
			$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -I $(IPATH) -o $(NAME)

$(OBJS)		:	| $(OPATH)

$(OPATH)	:
			mkdir -p $(OPATH)

clean		:
			$(RM) $(OPATH)

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
