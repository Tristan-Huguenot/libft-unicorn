/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:18:56 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/06 04:37:41 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(int c)
{
	printf("\n\tChar : %c\n", c);
	printf("\n\tisdigit outpout : %d\n", ((isdigit(c) > 0) * 1));
	printf("\n\tft_isdigit outpout : %d\n", ft_isdigit(c));
	separator();
}

int	main(int ac, char **av)
{
	start_function("isdigit");
	separator();
	if (ac > 1)
		test(av[1][0]);
	else
	{
		test('0');
		test('t');
	}
	end_function();
	return (0);
}
