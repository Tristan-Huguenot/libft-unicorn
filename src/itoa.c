/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:16:55 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/10 01:10:49 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(int n)
{
	char	*nb;

	printf("\n\tn:\t%d\n", n);
	nb = ft_itoa(n);
	printf("\n\titoa:\t%s\n", nb);
	free(nb);
	separator();
}

int	main(int ac, char **av)
{
	start_function("split");
	separator();
	if (ac > 1)
	{
		test(atoi(av[1]));
	}
	else
	{
		test(42);
		test(0);
		test(INT_MAX);
		test(INT_MIN);
	}
	end_function();
	return (0);
}
