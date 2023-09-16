/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:06:29 by msloot            #+#    #+#             */
/*   Updated: 2023/09/16 17:09:17 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
