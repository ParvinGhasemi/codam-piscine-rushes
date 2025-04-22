/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/23 13:26:31 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/22 06:31:53 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush(1, 5);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(3, 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(5, 5);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(-1, 5);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(5, -7);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(5, 0);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(0, 5);
	write(1, "\n", 1);
	write(1, "\n", 1);
	return (0);
}
