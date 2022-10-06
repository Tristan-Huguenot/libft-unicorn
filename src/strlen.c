/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 03:44:36 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/06 04:38:38 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char *s, int mode)
{
	printf("\n\tChar * : %s\n", s);
	if (!mode)
		printf("\n\tstrlen : %lu\n", strlen(s));
	printf("\n\tft_strlen : %lu\n", strlen(s));
	separator();
}

int	main(int ac, char **av)
{
	int	i;

	start_function("strlen");
	separator();
	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			if (!strcmp(av[i], "NULL"))
				test(NULL, 1);
			else
				test(av[i], 0);
			i++;
		}
	}
	else
		test("Hello World !", 0);
	end_function();
	return (0);
}
