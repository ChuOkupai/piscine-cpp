# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 10:57:12 by asoursou          #+#    #+#              #
#    Updated: 2021/01/22 16:04:16 by asoursou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= fixed
SRC			:= Fixed.cpp \
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
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./$<

$(BUILD_DIR):
	mkdir $@

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEP)

.PHONY: all clean fclean re test
