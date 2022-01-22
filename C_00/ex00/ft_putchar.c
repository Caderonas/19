/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loverhae <loverhae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 00:05:03 by loverhae          #+#    #+#             */
/*   Updated: 2021/07/02 13:11:32 by loverhae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	main(void)
{
	char c;

	c = 'v';
	ft_putchar(c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
