/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allevass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:30:28 by allevass          #+#    #+#             */
/*   Updated: 2023/08/11 22:07:43 by allevass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_or_last_line(int w)
{
	int	i;

	i = 0;
	ft_putchar('A');
	while (i < w - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	print_middle_line(int w)
{
	int	i;

	i = 0;
	ft_putchar('B');
	while (i < w - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int w, int h)
{
	if (w > 0 && h > 0)
	{
		int	i;

		print_first_or_last_line(w);
		i = 0;
		while (i < h - 2)
		{
			print_middle_line(w);
			i++;
		}
		if (h > 1)
		{
			print_first_or_last_line(w);
		}
	}
}
