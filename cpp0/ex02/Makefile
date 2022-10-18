# constant
SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."

NAME		:=	The_Job_Of_Your_Dreams
IPATH		:=	.
OPATH		:=	obj

CXX		:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Werror -Wextra
CPPFLAGS	:=	-MMD -I $(IPATH)

SRCSPATH	:=	.

RM		:=	rm -rf
VAL		:=	valgrind --leak-check=full --show-leak-kinds=all

SRCS		:=	tests.cpp\
			Account.cpp

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
			make
			@echo $(SEP_P)
			$(VAL) ./$(NAME)
			@echo $(SEP_P)

compare		:
			@$(call check_log)

define check_log
	if [ ! -f "cmp_log.sh" ]; \
	then \
		wget "https://raw.githubusercontent.com/BarrierAntho/42_cpp/main/cpp0/ex02/cmp_log.sh" || return 1; \
	fi
	chmod +x "cmp_log.sh"; \
	./cmp_log.sh;
endef

-include $(DEPS)

.PHONY		:	all clean fclean re test compare
