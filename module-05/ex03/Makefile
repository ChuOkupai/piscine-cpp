# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 11:03:57 by asoursou          #+#    #+#              #
#    Updated: 2021/02/05 18:11:17 by asoursou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= civic-service
SRC			:= Bureaucrat.cpp \
			   Form.cpp \
			   Intern.cpp \
			   PresidentialPardonForm.cpp \
			   RobotomyRequestForm.cpp \
			   ShrubberyCreationForm.cpp \
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
	rm -f $(NAME) *_shrubbery

re: fclean all

test: $(NAME)
	./$<

$(BUILD_DIR):
	mkdir $@

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEP)

.PHONY: all clean fclean re test
