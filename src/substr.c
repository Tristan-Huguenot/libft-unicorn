/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:16:55 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/10 00:26:31 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char const *s, unsigned int start, size_t len)
{
	char	*str;
	printf("\n\tconst *s:\t%s\n", s);
	printf("\n\tindex start:\t%u\n", start);
	printf("\n\tmax len:\t%lu\n", len);
	str = ft_substr(s, start, len);
	printf("\n\tsubstr:\t%s\n", str);
	free(str);
	separator();
}

int	main(int ac, char **av)
{
	start_function("substr");
	separator();
	if (ac > 3)
	{
		if (!strcmp(av[1], "NULL"))
			test(NULL, atoi(av[2]), atoi(av[3]));
		else
			test(av[1], atoi(av[2]), atoi(av[3]));
	}
	else
	{
		test("Hello World !", 6, 7);
		test("Hello World !", 6, 5);
		test("Hello World !", 0, 13);
		test("Hello World !", 0, 20);
		test(NULL, 0, 13);
	}
	end_function();
	return (0);
}
