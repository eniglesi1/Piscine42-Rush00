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
			if (j == 0 || j == y)
			{
				if (i == 0 || i == x)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
			{
				if (i == 0 || i == x)
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}