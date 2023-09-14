# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jternero <jternero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/02 19:51:35 by jternero          #+#    #+#              #
#    Updated: 2023/09/14 22:16:36 by jternero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := push_swap
CC        := gcc
FLAGS    := -Wall -Wextra -Werror 
CMP		= 1
FILE	= $(shell ls -Rl src/ | grep -F .c | wc -l)
LIBFT := libft.a 
LIBFT_PATH := ./libft/


################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=            src/index.c \
						  src/lst_utils.c \
						  src/push.c \
						  src/push_swap.c \
						  src/radix.c \
						  src/reverse.c \
						  src/rotate.c \
						  src/simple_sort.c \
						  src/simple_sort_utils.c \
						  src/swap.c \
						  
OBJS        := $(SRCS:.c=.o)

%.o: %.c
	@clear
	@echo "                     \r$(LBLUE)[$(RESET)$(CMP)$(LBLUE)] $(RESET)🅟 🅤 🅢 🅗  🅢 🅦 🅐 🅟 $(GREEN)$<$(BLUE) [$(RESET)$(CMP)$(BLUE)/$(RESET)$(FILE)$(BLUE)]$(RESET)                        \r"
	@$(CC) $(FLAGS) -c $< -o  $@
	@$(eval CMP=$(shell echo $$(($(CMP)+1))))

################################################################################
#                                  Makefile  objs                              #
################################################################################


GREEN	= \033[38;5;76m
RED		= \033[38;5;160m
YELLOW	= \033[38;5;226m
ORANGE	= \033[38;5;202m
PURPLE	= \033[38;5;213m
LBLUE	= \033[38;5;51m
BLUE	= \033[38;5;117m
INDI	= \033[38;5;99m
RESET	= \033[00m
RM		    := rm -f




all:		${NAME}
${NAME}: ${OBJS}
	@make -C ${LIBFT_PATH}
	@ ${CC} ${FLAGS} ${OBJS} ${LIBFT_PATH}${LIBFT} -o ${NAME}
	@echo "\n\t$(YELLOW) 🅟 🅤 🅢 🅗  🅢 🅦 🅐 🅟 $(RESET)  \n"
	@echo "\t\t   $(YELLOW)   by  𝕁 𝕋 𝔼 ℝ ℕ 𝔼 ℝ 𝕆 $(RESET)  \n"
bonus:		all

clean:
			@ ${RM} src/*.o
			@ echo "\n\t $(RED)🅟 🅤 🅢 🅗  🅢 🅦 🅐 🅟    $(LBLUE) deleted!$(RESET)  \n"

fclean:		clean
			@ ${RM} ${NAME} libft/libft.a libft/src/*/*.o
			@ echo "\n\t $(RED)🅛 🅘 🅑 🅕 🅣           $(LBLUE) deleted!$(RESET)  \n"

re:			fclean all


FORCE: 

re:			fclean  all

.PHONY:		all clean fclean re
