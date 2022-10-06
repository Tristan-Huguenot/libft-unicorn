/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:18:56 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/06 04:34:54 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(int c)
{
	printf("\n\tChar : %c\n", c);
	printf("\n\tisalpha outpout : %d\n\n", ((isalpha(c) > 0) * 1));
	printf("\n\tft_isalpha outpout : %d\n", ft_isalpha(c));
	separator();
}

int	main(int ac, char **av)
{
	start_function("isalpha");
	separator();
	if (ac > 1)
		test(av[1][0]);
	else
	{
		test('g');
		test('-');
	}
	end_function();
	return (0);
}
