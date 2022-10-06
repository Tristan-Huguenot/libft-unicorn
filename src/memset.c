/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 03:44:36 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/06 04:43:11 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char c, int bytes)
{
	void	*ptr;
	if (c == 0)
	{
		printf("\n\tft_memset = %s\n", (char *)ft_memset(NULL, c, bytes));
		return ;
	}
	ptr = calloc(bytes * 2, bytes * 2);
	if (!ptr)
		return ;
	printf("\n\tChar to set : %c\n", c);
	printf("\n\tmemset : %s\n", (char *)memset(ptr, c, bytes));
	printf("\n\tft_memset : %s\n", (char *)ft_memset(ptr + bytes, c, bytes));
	separator();
	free(ptr);
}

int	main(int ac, char **av)
{
	start_function("memset");
	separator();
	if (ac == 3)
	{
		if (!strcmp(av[1], "NULL"))
			test(0, 42);
		if (atoi(av[2]) >= 0)
			test(av[1][0], atoi(av[2]));
		else
			printf("number of bytes need to be positive");
	}
	else if (ac == 2 || ac > 3)
		printf("usage: memset [char to set] [number of bytes to set]");
	else
		test('.', 21);
	end_function();
	return (0);
}
