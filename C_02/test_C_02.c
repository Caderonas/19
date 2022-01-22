/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_C_02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loverhae <loverhae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:14:59 by loverhae          #+#    #+#             */
/*   Updated: 2021/02/18 12:14:59 by loverhae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char *argv)
{
	if (argc == 2)
	{
		if (argv[1] == '0')
		{
			char str0[] = "Une phrase";
			char str1[] = "nan";
			char *test;

			test = ft_strcpy(str0, str1);
			printf("\n %s \n", str0);
			printf("\n %s \n", test);
		}
	}
}