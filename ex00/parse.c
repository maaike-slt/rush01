/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:17:57 by msloot            #+#    #+#             */
/*   Updated: 2023/09/17 12:56:53 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
void	ft_putstr(char *str);

int	parse(char *input, int *n)
{
	int	i;

	i = ft_strlen(input) + 1;
	if (i % 8 != 0 || i / 8 > 9)
		return (0);
	*n = i / 8;
	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(input[i] >= '1' && input[i] <= '0' + *n))
				return (0);
			ft_putstr("\0store digit in view\n");
		}
		else if (input[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
