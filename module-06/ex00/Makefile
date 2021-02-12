# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/06 10:43:54 by asoursou          #+#    #+#              #
#    Updated: 2021/02/09 14:10:08 by asoursou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= js++
SRC			:= Scalar.cpp \
			   main.cpp \
			   utility.cpp
CXX			:= clang++
CXXFLAGS	:= -Wall -Wextra -Werror -Wpedantic -Wvla -std=c++98 -MMD -MP
BUILD_DIR	:= .build
DEP			:= $(SRC:%.cpp=$(BUILD_DIR)/%.d)
OBJ			:= $(DEP:.d=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	@echo '> Tests (SUBJECT)'
	./$< 0
	./$< nan
	./$< 42.0f
	@echo '> Tests (LIMITS)'
	./$< -129 # CHAR_MIN - 1
	./$< 128 # CHAR_MAX + 1
	./$< -2147483649 # INT_MIN - 1
	./$< 2147483648 # INT_MAX + 1
	./$< 1.17549e-46 # 1e-8 * FLOAT_MIN
	./$< 3.40282e+39 # 10 * FLOAT_MAX
	@echo '> Tests (INVALID)'
	./$< || true
	./$< ' -42' || true
	./$< 88f || true
	./$< 99.0ff || true
	./$< abc || true

$(BUILD_DIR):
	mkdir $@

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEP)

.PHONY: all clean fclean re test
