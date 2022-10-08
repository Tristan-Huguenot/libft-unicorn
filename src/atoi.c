/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:22:16 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 20:38:03 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char *str)
{
	printf("\n\tstr:\t\t%s\n", str);
	printf("\n\tatoi:\t\t%d\n", atoi(str));
	printf("\n\tft_atoi:\t%d\n", ft_atoi(str));
	separator();
}

int	main(int ac, char **av)
{
	int	i;

	start_function("atoi");
	separator();
	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{	
			test(av[i]);
			i++;
		}
	}
	else
	{
		test("42");
		test("-42");
		test("2147483647");
		test("-214783648");
		test("9999999999999999999");
		test("-9999999999999999999");
	}
	end_function();
	return (0);
}
