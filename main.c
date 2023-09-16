/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:20:43 by msloot            #+#    #+#             */
/*   Updated: 2023/09/16 14:08:08 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int	parse(char *input, int view[4][9], int *n);

int	error()
{
	ft_putstr("Error\n");
	return (1);
}

void	init_grid(int grid[9][9], int n)
{
	int	x;
	int	y;

	x = 0;
	while (x < n)
	{
		y = 0;
		while (y < n)
		{
			grid[x][y] = 0;
			y++;
		}
		x++;
	}
}

int	main(int argc, char *argv[])
{
	int	grid[9][9];
	int	view[4][9];
	int	n;

	if (argc != 2)
		return (error());
	if (parse(argv[1], view, &n) == 0)
		return (error());
	init_grid(grid, n);
	if (solve(grid, view, n) == 0)
		return (error());
	// print the grid
	return (0);
}

void	print_grid(int grid[9][9], int n)
{
	int	x;
	int	y;

	x = 0;
	while (x < n)
	{
		y = 0;
		while (y < n)
		{
			ft_putchar(grid[x][y] + '0');
			if (y < n - 1)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
