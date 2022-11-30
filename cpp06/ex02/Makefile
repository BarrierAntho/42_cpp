# constant
SEP_P           :=      "----------------------------------------------"
SEP_S           :=      ".............................................."

NAME		:=	Identifyrealtype
IPATH		:=	.
OPATH		:=	obj

CXX		:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Werror -Wextra -g3
CPPFLAGS	:=	-MMD -I $(IPATH)

SRCSPATH	:=	.

RM		:=	rm -rf
VAL		:=	valgrind --leak-check=full --show-leak-kinds=all

SRCS		:=	main.cpp\
			MyClass.cpp

OBJS		:=	$(addprefix $(OPATH)/, $(SRCS:.cpp=.o))
DEPS		:=	$(OBJS:.o=.d)

vpath %.hpp	$(IPATH)
vpath %.cpp	$(SRCSPATH)
vpath %.o	$(OPATH)

all		:	$(NAME)

$(OPATH)/%.o	:	%.cpp
			$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I $(IPATH) -o $(NAME)

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
			make all
			@echo $(SEP_P)
			$(VAL) ./$(NAME)

-include $(DEPS)

.PHONY		:	all clean fclean re test
