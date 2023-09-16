/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:20:43 by msloot            #+#    #+#             */
/*   Updated: 2023/09/16 17:35:52 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int	parse(char *input, int view[4][9], int *n);
void	init_grid(int grid[9][9], int n);

int	error()
{
	ft_putstr("Error\n");
	return (1);
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
