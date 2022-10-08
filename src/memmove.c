/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 03:44:36 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 11:55:28 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test_1(void)
{
	char	*s;
	char	*src;
	char	*dest;
	size_t	len;
	size_t	size;

	len = strlen("Hello World !");
	size = len * 2 + 5;
	s = calloc(size, sizeof(*s));
	if (!s)
		return ;
	src = s + 2;
	dest = src + len;
	memset(s, '.', size - 1);
	memcpy(src, "Hello World !", len);
	printf("\n\tmemory before:\t%s\n", s);
	ft_memmove(dest, src, len);
	printf("\n\tmemory after:\t%s\n", s);
	separator();
}

static void	test_2(void)
{
	char	*s;
	char	*src;
	char	*dest;
	size_t	len;
	size_t	size;

	len = strlen("Hello World !");
	size = len * 2 + 5;
	s = calloc(size, sizeof(*s));
	if (!s)
		return ;
	src = s + 2;
	dest = src + 2;
	memset(s, '.', size - 1);
	memcpy(src, "Hello World !", len);
	printf("\n\tmemory before:\t%s\n", s);
	ft_memmove(dest, src, len);
	printf("\n\tmemory after:\t%s\n", s);
	separator();
}

static void	test_3(void)
{
	char	*s;
	char	*src;
	char	*dest;
	size_t	len;
	size_t	size;

	len = strlen("Hello World !");
	size = len * 2 + 5;
	s = calloc(size, sizeof(*s));
	if (!s)
		return ;
	dest = s + 2;
	src = dest + 2;
	memset(s, '.', size - 1);
	memcpy(src, "Hello World !", len);
	printf("\n\tmemory before:\t%s\n", s);
	ft_memmove(dest, src, len);
	printf("\n\tmemory after:\t%s\n", s);
	separator();
}

int	main(int ac, char **av)
{
	start_function("memmove");
	separator();
	if (ac == 2)
	{
		if (!strcmp(av[1], "NOVLAP"))
			test_1();
		else if (!strcmp(av[1], "OVLAP"))
			test_2();
		else if (!strcmp(av[1], "ROVLAP"))
			test_3();
		else
			printf("usage: memmove [NOVLAP/OVLAP/ROVLAP]");
	}
	else
	{
		test_1();
		test_2();
		test_3();
	}
	end_function();
	return (0);
}
