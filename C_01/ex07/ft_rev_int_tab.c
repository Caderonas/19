/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loverhae <loverhae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:56:23 by loverhae          #+#    #+#             */
/*   Updated: 2021/02/08 23:03:52 by loverhae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;

	if(size <= 1)
	{
		return;
	}
	else
	{
		temp = a[0];
		a[0] = a[size-1];
		a[size-1] = temp;
		ft_rev_int_tab(&a[1], size-2)
	}
}