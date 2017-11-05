#include "../includes/fdf.h"

#define W_X 1000
#define W_Y 1000

// void print_map(t_map *map)
// {
// 	for (int i = 0; i < map->row; i++)
// 	{
// 		for (int j = 0; j < map->col; j++)
// 			ft_printf("%i", map->map[i][j]);
// 		ft_printf("\n");
// 	}
// }

t_vec2	*init_vec2(int x, int y)
{
	t_vec2 *v;

	v = (t_vec2 *)malloc(sizeof(t_vec2));
	v->x = x;
	v->y = y;

	return (v);
}

// int *row_to_int(char **split)
// {
// 	int size;

// 	size = 0;
// 	while (split[size])
// 		size++;
// 	while (size--)
// 	{

// 	}
// }

// char *read_row()
// {
// 	char **row;
// 	int **rowi;
// 	row = ft_strsplit();
// 	if (row[0] == NULL)
// 		return (NULL);
// 	rowi = row_to_int(row);

// 	return (rowi);
// }

// int set_col(t_map *map)
// {
	
// }

// t_map *new_map(int fd)
// {
// 	t_map *map;

// 	map = malloc(sizeof(map));
// 	map->row = 0;
// 	map->col = 0;
// 	while ((map->map[map->row] = read_row()) != NULL)
// 		map->row++;
// 	map->col = set_col(map);
// }

// t_map *read_map(char *path)
// {
// 	t_map *map;
// 	int fd;

// 	fd = open(path, O_RDONLY);
// 	map = new_map(fd);
// 	close(fd);
// 	return (map);
// }

int main (int argc, char **argv)
{
	void *x;
	void *window;

	t_vec2 *v1;
	v1 = init_vec2(100, 100);
	if (argc != 1)
		return 1;
	char *s = argv[0];
	s++;
	// read_map(argv[1]);
	x = mlx_init();
	window = mlx_new_window(x, W_X, W_Y, "New window");
	// mlx_string_put(x, window, 0, 0, COLOR_RED, argv[1]);
	for (int i = 0; i < W_Y; i++)
	{
		for (int j = 0; j < W_X; j++)
		{
			mlx_pixel_put(x, window, i, j, COLOR_RED + (j * COLOR_RED));
		}
	}
	ft_printf("DONE\n");
	// mlx_pixel_put();
	// mlx_draw_vec2(v1, 0, 0);
	
	mlx_loop(x);

	return 1;
}