all:
	gcc -Wall -Werror -Wextra -I minilibx -L./minilibx_macos \
		-lmlx -framework OpenGL -framework AppKit main.c