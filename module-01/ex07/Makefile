# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/15 17:42:06 by asoursou          #+#    #+#              #
#    Updated: 2021/01/22 15:30:15 by asoursou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= replace
SRC			:= Replace.cpp \
			   main.cpp
CXX			:= clang++
CXXFLAGS	:= -Wall -Wextra -Werror -Wpedantic -Wvla -std=c++98 -MMD -MP
BUILD_DIR	:= .build
DEP			:= $(SRC:%.cpp=$(BUILD_DIR)/%.d)
OBJ			:= $(DEP:.d=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(BUILD_DIR) test/*.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./$< file s1 '' || true
	./$< file s1 s2 || true
	./$< test/lorem e '*' && sdiff test/lorem* || true
	./$< test/password min max && sdiff test/password* || true
	./$< test/words world universe && sdiff test/words* || true
	./$< test/zelda 'Squalala, n' N && sdiff test/zelda* || true

$(BUILD_DIR):
	mkdir $@

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEP)

.PHONY: all clean fclean re test
