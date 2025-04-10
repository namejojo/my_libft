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
			ft_atoi.c \
			ft_tolower.c \
			ft_itoa.c \
			ft_substr.c
		
OBJ_FILES = ${SRC_FILES:.c=.o}

SRC_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c 

OBJ_BONUS = ${SRC_BONUS:.c=.o}

NAME = libft.a

HDR_FILE = libft.h

CC = cc

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ_FILES}
	ar rcs $@ $?

bonus: ${OBJ_FILES} $(OBJ_BONUS) ${HDR_FILE}
	ar rcs ${NAME} $(OBJ_BONUS) ${OBJ_FILES}
	
%.o: %.c ${HDR_FILE}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	rm -f $(OBJ_BONUS) $(OBJ_FILES)

fclean: clean 
	rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean all