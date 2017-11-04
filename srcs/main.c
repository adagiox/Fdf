#include "fdf.h"

#define W_X 1000
#define W_Y 1000

t_vec2	*init_vec2(int x, int y)
{
	t_vec2 *v;

	v = (t_vec2 *)malloc(sizeof(t_vec2));
	v->x = x;
	v->y = y;

	return (v);
}

char *read_row()
{
	ft_strsplit();
}

t_map *new_map()
{
	int row_num;
	int col_num;
	char *row;

	while ((row = read_row()) != NULL)
	{
		row++;
	}
}

t_map *read_map()
{
	t_map *map;
	map = new_map();

	return (map);
}

int main (int argc, char **argv)
{
	void *x;
	void *window;

	t_vec2 *v1;
	v1 = init_vec2(100, 100);
	if (argc != 2)
		return 1;

	read_map()
	x = mlx_init();
	window = mlx_new_window(x, W_X, W_Y, "New window");
	mlx_string_put(x, window, 0, 0, COLOR_RED, argv[1]);
	// mlx_draw_vec2(v1, 0, 0);
	
	mlx_loop(x);

	return 1;
}