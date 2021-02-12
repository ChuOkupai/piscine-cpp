# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 11:03:57 by asoursou          #+#    #+#              #
#    Updated: 2021/02/02 14:46:49 by asoursou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= warscammer-40000
SRC			:= AssaultTerminator.cpp \
			   Squad.cpp \
			   TacticalMarine.cpp \
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
	valgrind --leak-check=full ./$<

$(BUILD_DIR):
	mkdir $@

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEP)

.PHONY: all clean fclean re test
