/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 03:44:36 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 11:37:24 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(int bytes)
{
	void	*ptr;

	ptr = malloc(43);
	if (!ptr)
		return ;
	bzero(ptr, 43);
	printf("\n\tmem to cpy : %s\n", "Hello World !");
	printf("\n\tNumber of bytes : %d\n", bytes);
	memcpy(ptr, "Hello World !", bytes);
	ft_memcpy(ptr + 21, "Hello World !", bytes);
	printf("\n\tmemcpy : %s\n", (char *)ptr);
	printf("\n\tft_memcpy : %s\n", (char *)ptr + 21);
	separator();
	free(ptr);
}

int	main(int ac, char **av)
{
	start_function("memcpy");
	separator();
	if (ac == 2)
	{
		if (atoi(av[1]) > 21)
			test(21);
		else if (atoi(av[1]) >= 0)
			test(atoi(av[1]));
	}
	else if (ac > 2)
		printf("usage: memcpy [number of bytes to copy, up to 21]");
	else
	{
		test(3);
		test(0);
	}
	end_function();
	return (0);
}
