/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 03:44:36 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/06 20:59:22 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(int bytes)
{
	char	*s = "Hello World !";

	if (!ptr)
		return ;
	bzero(ptr, 43);
	printf("\n\tNumber of bytes : %d\n", bytes);
	memcpy(ptr, "Hello World !", bytes);
	ft_memcpy(ptr + 21, "Hello World !", bytes);
	printf("\n\tmemcpy : %s\n", (char *)ptr);
	printf("\n\tft_memcpy : %s\n", (char *)ptr + 21);
	separator();
}

int	main(int ac, char **av)
{
	start_function("memmove");
	separator();
	if (ac == 2)
	{
		if (strcmp(av[1], "NOVLAP"))
			test_1();
		else if (strcmp(av[1], "OVLAP"))
			test_2();
		else if (strcmp(av[1], "ROVLAP"))
			test_3();
		else
			printf("usage: memmove [NOVLAP/OVLAP/ROVLAP]")
	}
	else
	{
		test_1(3);
		test_2(3);
		test_3(3);
	}
	end_function();
	return (0);
}
