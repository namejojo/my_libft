SRC_FILES = ft_toupper.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_split.c \
			ft_strrchr.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c  \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strtrim.c \
			ft_bzero.c \
			ft_tolower.c \
			ft_atoi.c \
			ft_itoa.c \
			ft_substr.c
		
OBJ_FILES=${SRC_FILES:.c=.o}

SRC_BONUS=ft_lstdelone_bonus.c ft_lstadd_back_bonus.c \
		  ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		  ft_lstiter_bonus.c ft_lstlast_bonus.c \
		  ft_lstmap_bonus.c ft_lstnew_bonus.c \
		  ft_lstsize_bonus.c 

OBJ_BONUS=${SRC_BONUS:.c=.o}

NAME=libft.a

HDR_FILE=libft.h

CC=cc

FdLAGS= -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ_FILES}
	ar rcs $@ $?

#main: my_main.c
#	@git clone
#
#main bonus: my_main_bonus.c
#	@git clone

bonus: .bonus

.bonus: ${OBJ_FILES} $(OBJ_BONUS)
	ar rcs ${NAME} $?
	@touch .bonus

%.o: %.c ${HDR_FILE}
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean: 
	rm -f $(OBJ_BONUS) $(OBJ_FILES) 
	@rm -f .bonus

fclean: clean 
	rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean all