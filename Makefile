# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jternero <jternero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/02 19:51:35 by jternero          #+#    #+#              #
#    Updated: 2023/09/02 20:10:51 by jternero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := push_swap
CC        := gcc
FLAGS    := -Wall -Wextra -Werror 
CMP		= 1
FILE	= $(shell ls -l src/ | grep -F .c | wc -l)


################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      libft/src/check/ft_isalnum.c \
                          libft/src/check/ft_isalpha.c \
                          libft/src/check/ft_isascii.c \
                          libft/src/check/ft_isdigit.c \
                          libft/src/check/ft_isprint.c \
                          libft/src/check/ft_isspace.c \
                          libft/src/print/ft_printf.c \
                          libft/src/list/ft_lstadd_back.c \
                          libft/src/list/ft_lstadd_front.c \
                          libft/src/list/ft_lstclear.c \
                          libft/src/list/ft_lstdelone.c \
                          libft/src/list/ft_lstiter.c \
                          libft/src/list/ft_lstlast.c \
                          libft/src/list/ft_lstmap.c \
                          libft/src/list/ft_lstnew.c \
                          libft/src/list/ft_lstsize.c \
                          libft/src/memory/ft_bzero.c \
                          libft/src/memory/ft_calloc.c \
                          libft/src/memory/ft_memchr.c \
                          libft/src/memory/ft_memcmp.c \
                          libft/src/memory/ft_memcpy.c \
                          libft/src/memory/ft_memmove.c \
                          libft/src/memory/ft_memset.c \
                          libft/src/print/ft_putchar.c \
                          libft/src/print/ft_putchar_fd.c \
                          libft/src/print/ft_putendl_fd.c \
                          libft/src/print/ft_puthexa.c \
                          libft/src/print/ft_puthexa_u.c \
                          libft/src/print/ft_putnbr_base.c \
                          libft/src/print/ft_putnbr_fd.c \
                          libft/src/print/ft_putstr.c \
                          libft/src/print/ft_putstr_fd.c \
                          libft/src/print/ft_putunbr_base.c \
                          libft/src/string/ft_atof.c \
                          libft/src/string/ft_atoi.c \
                          libft/src/string/ft_atol.c \
                          libft/src/string/ft_freesplit.c \
                          libft/src/string/ft_itoa.c \
                          libft/src/string/ft_nbrlen_base.c \
                          libft/src/string/ft_ptr_setstring.c \
                          libft/src/string/ft_split.c \
                          libft/src/string/ft_strcapitalize.c \
                          libft/src/string/ft_strchr.c \
                          libft/src/string/ft_strcmp.c \
                          libft/src/string/ft_strdup.c \
                          libft/src/string/ft_striteri.c \
                          libft/src/string/ft_strjoin.c \
                          libft/src/string/ft_strlcat.c \
                          libft/src/string/ft_strlcpy.c \
                          libft/src/string/ft_strlen.c \
                          libft/src/string/ft_strmapi.c \
                          libft/src/string/ft_strncmp.c \
                          libft/src/string/ft_strnstr.c \
                          libft/src/string/ft_strrchr.c \
                          libft/src/string/ft_strtrim.c \
                          libft/src/string/ft_substr.c \
                          libft/src/string/ft_tolower.c \
                          libft/src/string/ft_toupper.c \
                          libft/src/string/ft_unbrlen_base.c \
                          src/index.c \
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
	@echo "\r$(LBLUE)[$(RESET)$(CMP)$(LBLUE)] $(RESET)Compilation in progress... $(GREEN)$<$(BLUE) [$(RESET)$(CMP)$(BLUE)/$(RESET)$(FILE)$(BLUE)]$(RESET)                        \r"
	$(CC) $(CFLAGS) -c $< -o  $@
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

${NAME}:	${OBJS}
			@${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "\n$(RED)pu$(ORANGE)sh_$(YELLOW)swa$(GREEN)p i$(LBLUE)s re$(BLUE)ady $(INDI)to r$(PURPLE)un !$(RESET)  \n"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "\n\t $(RED)pu$(ORANGE)sh_$(YELLOW)swa$(GREEN)p wa$(LBLUE)s del$(BLUE)et$(INDI)ed$(PURPLE)!$(RESET)  \n"

fclean:		clean
			@ ${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re


