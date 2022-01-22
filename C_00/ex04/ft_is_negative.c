/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loverhae <loverhae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 00:12:48 by loverhae          #+#    #+#             */
/*   Updated: 2021/02/07 00:13:00 by loverhae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n);

void	main(void)
{
	int a;

	a = -32;
	ft_is_negative(a);
}

void	ft_is_negative(int n)
{
	char c;

	c = (n > 0) ? 'P' : 'N';
	write(1, &c, 1);
}
