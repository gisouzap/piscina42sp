/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:47:49 by gsouza-p          #+#    #+#             */
/*   Updated: 2019/10/08 16:31:18 by gsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 55 || b != 56 || c != 57)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int a;
	int	b;
	int c;

	a = 47;
	b = 48;
	c = 48;
	while (a++ <= 54)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			if (b != a)
			{
				while (c <= 57)
				{
					ft_print(a, b, c);
					c++;
				}
			}
			b++;
		}
	}
}
