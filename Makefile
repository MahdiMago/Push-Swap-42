# Nom de l'exécutable
NAME = push_swap

# Compilateur et options
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iincludes -Iincludes/ft_printf -Iincludes/Libft

# Répertoires sources
SRC_DIR = src
PRINTF_DIR = includes/ft_printf
LIBFT_DIR = includes/Libft

# Fichiers sources
SRC_FILES = main.c parsing/check_input.c free.c parsing/store.c \
algorithm/init_node_a.c algorithm/sort.c algorithm/move_a_to_b.c algorithm/move_b_to_a.c \
algorithm/sort_three.c rules/moves.c rules/swap.c utils/find_utils.c utils/ftt_lstnew.c \
utils/ftt_lstadd_back.c utils/ftt_lstclear.c utils/free_list.c rules/moves_2.c rules/moves_3.c \

LIBFT_FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

PRINTF_FILES = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_uputnbr.c

# Création des chemins complets
SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
PRINTF_SRC = $(addprefix $(PRINTF_DIR)/, $(PRINTF_FILES))
LIBFT_SRC = $(addprefix $(LIBFT_DIR)/, $(LIBFT_FILES))

# Fichiers objets
OBJ = $(SRC:.c=.o)
PRINTF_OBJ = $(PRINTF_SRC:.c=.o)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)

# Règle par défaut
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ) $(PRINTF_OBJ) $(LIBFT_OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJ) $(PRINTF_OBJ) $(LIBFT_OBJ)

# Règle pour compiler les fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ) $(PRINTF_OBJ) $(LIBFT_OBJ)

# Nettoyage complet (objets et exécutable)
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

# Phony targets
.PHONY: all clean fclean re
