# constant
SEP_P           :=      "------------------------------------    ----------"
SEP_S           :=      "....................................    .........."

NAME		:=	sed_is_for_losers
IPATH		:=	.
OPATH		:=	obj

CXX		:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Werror -Wextra
CPPFLAGS	:=	-MMD -I $(IPATH)

SRCSPATH	:=	.

RM		:=	rm -rf
VAL		:=	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes

SRCS		:=	main.cpp\
			MySed.cpp

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
			rm -rf test/*.replace
			@echo $(SEP_P)
#			$(VAL) ./$(NAME)
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) a
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) a b
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) a b c d
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) a "" c
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) a b c
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) test/endl_no_word b c
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) test/endl_one_line_01 b c
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) test/endl_one_line_02 H h
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) test/endl_one_line_03 H hh
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) test/endl_lines_01 He Hi
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) test/endl_lines_02 He Hi
#			@echo $(SEP_P)
#			$(VAL) ./$(NAME) test/no_endl_one_line_01 a aa
#			@echo $(SEP_P)
			$(VAL) ./$(NAME) test/no_endl_one_line_02 a aa
			@echo $(SEP_P)

-include $(DEPS)

.PHONY		:	all clean fclean re test
