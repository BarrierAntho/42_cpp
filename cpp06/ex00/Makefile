# constant
SEP_P           :=      "----------------------------------------------"
SEP_S           :=      ".............................................."

NAME		:=	Conversiongofscalartypes
IPATH		:=	.
OPATH		:=	obj

CXX		:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Werror -Wextra -g3
CPPFLAGS	:=	-MMD -I $(IPATH)

SRCSPATH	:=	.

RM		:=	rm -rf
VAL		:=	valgrind --leak-check=full --show-leak-kinds=all

SRCS		:=	main.cpp\
			ConvertScalarTypes.cpp

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
			$(VAL) ./$(NAME) > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "a" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "1" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "42.42f" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "42.42" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "-inf" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "+inf" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "nan" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "-inff" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "+inff" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "nanf" > result.txt 2>&1
			less result.txt
			@echo $(SEP_P)
			$(VAL) ./$(NAME) "1a" > result.txt 2>&1
			less result.txt


-include $(DEPS)

.PHONY		:	all clean fclean re test
