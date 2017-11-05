FILES = srcs/main.c

all:
	make -C libft/
	gcc -Wall -Werror -Wextra -I minilibx -L./minilibx_macos \
		-lmlx -framework OpenGL -framework AppKit $(FILES)