# **************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 15:14:12 by oozsertt          #+#    #+#              #
#    Updated: 2021/12/17 18:59:50 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS_PATH =	$(shell find srcs -type d)

OBJ_DIR = $(BUILD)/obj

LIB_DIR =	lib/Libft

INC_DIR = $(shell find includes -type d) \
				$(shell find lib/Libft/includes -type d) \

BUILD = .build

vpath %.c $(foreach dir, $(SRCS_PATH), $(dir):)

SRCS = push_swap.c \
arg_check.c int_overflow_and_is_digit.c is_arg_sorted.c is_duplicate.c number_of_arg.c \
free_stack.c malloc_stack.c \
pa.c pb.c ra.c rra.c sa.c \
set_stack_a.c \
sort_big_stack.c \
sort_small_stack.c five_numbers_pb_one.c five_numbers_pb_zero.c sort_five_numbers.c \
four_numbers_pb_zero.c sort_four_numbers.c sort_three_numbers.c sort_two_numbers.c \
is_lst_sorted.c lst_size.c \

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

LIB = ft

CFLAGS =	-Wall -Werror -Wextra
BFLAGS =	-DBONUS=1
NOBFLAGS =	-DBONUS=0

IFLAGS		=	$(foreach dir, $(INC_DIR), -I $(dir))

LFLAGS		=	$(foreach dir, $(LIB_DIR), -L $(dir)) \
				$(foreach lib, $(LIB), -l $(lib)) \

all :
	@make BONUS=$(NOBFLAGS) $(NAME)

$(NAME) : install $(OBJS)
	@cc $(CFLAGS) $(BONUS) $(OBJS) $(LFLAGS) -o $(NAME)
	@echo "Executable successfully created\n"

$(OBJ_DIR)/%.o : %.c | $(BUILD)
	@cc $(CFLAGS) $(BONUS) -c $< $(IFLAGS) -o $@

$(BUILD):
	@mkdir $@ $(OBJ_DIR)
	@echo "Object directory created\n"
	@echo "Compiling..\n"

install:
	@$(foreach dir, $(LIB_DIR), make -C $(dir);)

install-fclean:
	@$(foreach dir, $(LIB_DIR), make -C $(dir) fclean;)

install-clean:
	@$(foreach dir, $(LIB_DIR), make -C $(dir) clean;)

install-re:
	@$(foreach dir, $(LIB_DIR), make -C $(dir) re;)

clean :
	@rm -rf $(BUILD)
	@echo "Object directory deleted\n"

fclean : clean
	@rm -rf $(NAME)
	@echo "Executable removed\n"

bonus : fclean
	@make BONUS=$(BFLAGS) $(NAME)

re : fclean all