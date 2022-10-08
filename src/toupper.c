/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:17:07 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 14:21:07 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char c)
{
	printf("\n\tchar:\t%c\n", c);
	printf("\n\ttoupper:\t%c\n", ft_toupper(c));
}

int	main(int ac, char **av)
{
	start_function("toupper");
	separator();
	if (ac > 1)
		test(av[1][0]);
	else
	{
		test('c');
		test('C');
		test('-');
	}
	end_function();
	return (0);
}
