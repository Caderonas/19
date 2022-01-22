/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loverhae <loverhae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 21:34:08 by loverhae          #+#    #+#             */
/*   Updated: 2021/02/03 21:34:08 by loverhae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

void	ft_putdisplay(char a[4])
{
	if (a[0] + a[1] < a[2] + a[3])
	{
		write(1, &a[0], 1);
		write(1, &a[1], 1);
		write(1, " ", 1);
		write(1, &a[2], 1);
		write(1, &a[3], 1);
		write(1, ", ", 1);
		write(1, " ", 1);
	}
}

void	main(void)
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	char a[4];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = '0';
		while (a[1] <= '8')
		{
			a[2] = '0';
			while (a[2] <= '9')
			{
				a[3] = '1';
				while (a[3] <= '9')
				{
					ft_putdisplay(a);
					a[3]++;
				}
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
