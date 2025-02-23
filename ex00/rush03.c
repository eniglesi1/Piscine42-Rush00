/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:00:22 by marvin            #+#    #+#             */
/*   Updated: 2025/02/22 15:00:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

static void	ft_putcoord(int i, int j, int x, int y)
{
	if (j == 0 || j == y)
	{
		if (i == 0 || i == x)
		{
			if (i == 0)
				ft_putchar('A');
			else
				ft_putchar('C');
		}
		else
			ft_putchar('B');
	}
	else
	{
		if (i == 0 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	x--;
	y--;
	while (j <= y)
	{
		i = 0;
		while (i <= x)
		{
			ft_putcoord(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
