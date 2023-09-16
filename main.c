/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:20:43 by msloot            #+#    #+#             */
/*   Updated: 2023/09/16 11:02:31 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	error()
{
	ft_putstr("Error\n");
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	parse(char *input, int view[9][9], int *n)
{
	int	i;

	i = ft_strlen(input) + 1;
	if (i % 8 != 0)
		return (0);
	*n = i / 4;
	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 0)
		{
			// check that digit is between 1 and n
		}
	}

	if (count % 4 != 0)
		return (0);
	*n = count / 4;
	return (1);
}

void	2d_bzero(int grid[9][9], int n)
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
	int	view[9][9];
	int	n;

	if (argc != 2)
		return (error());
	if (parse(argv[1], view, &n) == 0)
		return (error());
	2d_bzero(grid, n);
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
