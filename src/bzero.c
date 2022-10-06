/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 03:44:36 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/06 04:57:29 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void putnbyte(char *s, int bytes)
{
	int	i;
	
	i = 0;
	while (i < bytes)
	{
		printf("%c", (s[i]) + '0');
		i++;
	}
	printf("\n");
}

static void	test(int bytes)
{
	void	*ptr;

	ptr = calloc(bytes * 2, bytes * 2);
	if (!ptr)
		return ;
	printf("\n\tNumber of bytes : %d\n", bytes);
	bzero(ptr, bytes);
	printf("\n\tbzero : ");
	putnbyte(ptr, bytes);
	ft_bzero(ptr + bytes, bytes);
	printf("\n\tft_bzero : ");
	putnbyte(ptr + bytes, bytes);
	separator();
	free(ptr);
}

int	main(int ac, char **av)
{
	start_function("bzero");
	separator();
	if (ac == 2)
	{
		if (atoi(av[1]) >= 0)
			test(atoi(av[1]));
		else
			printf("number of bytes need to be positive");
	}
	else if (ac > 2)
		printf("usage: bzero [number of bytes to set]");
	else
		test(21);
	end_function();
	return (0);
}
