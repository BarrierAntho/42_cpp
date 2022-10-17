# constant
SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."
ORI_LOG		:=	19920104_091532
ORI_LOG_NO_T	:=	19920104_091532_without_time
RES		:=	my_log
RES_NO_T	:=	$(RES)_without_time

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
			$(VAL) ./$(NAME) > $(RES).log
			@echo $(SEP_P)

compare		:
			@$(call compare)

define compare
	if [ -f "$(ORI_LOG)" ]; \
	then \
		awk '{print $2}' $(ORI_LOG).log > $(ORI_LOG_NO_T).log; \
	else \
		wget https://projects.intra.42.fr/uploads/document/document/10875/19920104_091532.log && awk '{print $2}' $(ORI_LOG).log > $(ORI_LOG_NO_T).log || return 1; \
	fi;
	if [ -f "$(RES)" ]; \
	then \
		awk '{print $2}' $(RES).log > $(RES_NO_T).log || return 1; \
		diff $(RES).log $(RES_NO_T).log; \
	fi
endef

-include $(DEPS)

.PHONY		:	all clean fclean re test compare
