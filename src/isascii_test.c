/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:18:56 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/06 00:32:29 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(int c)
{
	printf("\n\tChar = %c\n", c);
	printf("\n\tisascii outpout = %d\n", ((isascii(c) > 0) * 1));
	printf("\n\tft_isascii outpout = %d\n", ft_isascii(c));
	separator();
}

int	main(int ac, char **av)
{
	start_function("isascii");
	separator();
	if (ac > 1)
		test(av[1][0]);
	else
	{
		test('g');
		test('t' + 't');
		test(257);
		test(127);
	}
	end_function();
	return (0);
}
