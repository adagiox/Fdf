#ifndef FDF_H
# define FDF_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "mlx.h"
# include "./libft/libft.h"

# define COLOR_WHITE	0xFFFFFF
# define COLOR_GRAY		0x808080
# define COLOR_BLACK	0x000000
# define COLOR_YELLOW	0xFFFF00
# define COLOR_GREEN	0x008000
# define COLOR_BLUE		0x0000FF
# define COLOR_RED		0xFF0000
# define COLOR_TEAL		0x008080
# define COLOR_PURPLE	0x800080
# define COLOR_AQUA		0x00FFFF
# define COLOR_LIME		0x00FF00
# define COLOR_MAROON	0x800000
# define COLOR_NAVY		0x000080
# define COLOR_MAGENTA	0xFF00FF

typdef struct	s_map
{
	int **map;
	int row;
	int col;
}				t_map;

typedef struct	s_vec2
{
	int x;
	int y;
	int s;
}				t_vec2;

typedef struct	s_vec3
{
	int x;
	int y;
	int z;
	int s;
}				t_vec3;

#endif