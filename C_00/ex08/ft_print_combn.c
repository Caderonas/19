/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loverhae <loverhae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 00:13:35 by loverhae          #+#    #+#             */
/*   Updated: 2021/02/07 12:42:22 by loverhae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n);

void	main(void)
{
	ft_print_comb2(42);
}

void	ft_print_combn(int n)
{
	char a[n];
    int i;

	a[0] = '0';
    while (a[0] >=  58-n)
    {
        i = 0;
        while (i < n && a[i] <= 58-n)
        {
            while (a[i] <= 58-n)
            {
                if ((a[0] + a[1])  < (a[2]  + a[3]))
					{
						a[1] == '0' && a[3] == '1' ?:write(1, ", ", 1);
						write(1, &a[0], 1);
						write(1, &a[1], 1);
						write(1, " ", 1);
						write(1, &a[2], 1);
						write(1, &a[3], 1);
					}
            }
            i++;
        }
        a[0]++;
    }
}