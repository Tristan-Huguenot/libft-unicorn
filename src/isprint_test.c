/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:18:56 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/06 00:32:45 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(int c)
{
	printf("\n\tChar = %c\n", c);
	printf("\n\tisprint outpout = %d\n", ((isprint(c) > 0) * 1));
	printf("\n\tft_isprint outpout = %d\n", ft_isprint(c));
	separator();
}

int	main(int ac, char **av)
{
	start_function("isprint");
	separator();
	if (ac > 1)
		test(av[1][0]);
	else
	{
		test('g');
		test(28);
		test(125);
	}
	end_function();
	return (0);
}
