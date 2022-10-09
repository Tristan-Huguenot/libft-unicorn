/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:16:55 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/10 00:34:41 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char const *s1, char const *s2)
{
	char	*str;

	printf("\n\tconst *s1:\t%s\n", s1);
	printf("\n\tconst *s2:\t%s\n", s2);
	str = ft_strjoin(s1, s2);
	printf("\n\tstrjoin:\t%s\n", str);
	free(str);
	separator();
}

int	main(int ac, char **av)
{
	char	*av1;
	char	*av2;

	start_function("strjoin");
	separator();
	if (ac > 2)
	{
		if (!strcmp(av[1], "NULL"))
			av1 = (void *)0;
		if (!strcmp(av[2], "NULL"))
			av2 = (void *)0;
		test(av1, av2);
	}
	else
	{
		test("Hello", "World !");
		test("", "World !");
		test("Hello", "");
		test(NULL, "World !");
		test("Hello", NULL);
		test(NULL, NULL);
	}
	end_function();
	return (0);
}
