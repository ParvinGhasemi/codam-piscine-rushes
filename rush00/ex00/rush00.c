/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/23 13:27:22 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/22 06:40:05 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_last(int width, char first_and_last, char mid)
{
	int	col;

	col = 0;
	while (col < width)
	{
		if (col == 0 || col == width - 1)
			ft_putchar(first_and_last);
		else
			ft_putchar(mid);
		col++;
	}
	col = 0;
}

void	rush(int x, int y)
{
	int	row;

	row = 0;
	if (x <= 0 || y <= 0)
		write(2, "invalid input", 13);
	else
	{
		while (row < y)
		{
			if (row == 0 || row == y - 1)
				print_first_last(x, 'o', '-');
			else
				print_first_last(x, '|', ' ');
			ft_putchar('\n');
			row++;
		}
	}
}
