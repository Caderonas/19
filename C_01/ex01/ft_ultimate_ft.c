/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loverhae <loverhae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:26:37 by loverhae          #+#    #+#             */
/*   Updated: 2021/02/09 11:00:35 by loverhae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
	int *********nbr;
	ft_ultimate_ft(&nbr);
	
	(42 == &nbr)? write(1, "OK", 2): write(1, "NOK", 2);
	return (42 == &nbr);
}

void	ft_ultimate_ft(int  *********nbr)
{
	*********nbr = 42;
}