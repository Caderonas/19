/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loverhae <loverhae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:04:48 by loverhae          #+#    #+#             */
/*   Updated: 2021/02/08 23:26:35 by loverhae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int max;
	int temp;

	while (i < size)
	{
		max = size-1;
		while (i >= 0)
		{
			max = tab[max] < tab[i] ? i: max;
			i--;
		}
		temp = tab[i];
		tab[i] = tab[max];
		tab[max] = temp;
	}
}