# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/14 14:05:24 by asoursou          #+#    #+#              #
#    Updated: 2021/01/17 12:02:24 by asoursou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= megaphone
SRC			:= megaphone.cpp
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
	./$< "shhhhh... I think the students are asleep..."
	./$< Damnit " ! " "Sorry students, I thought this thing was off."
	./$<

$(BUILD_DIR):
	mkdir $@

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEP)

.PHONY: all clean fclean re test
