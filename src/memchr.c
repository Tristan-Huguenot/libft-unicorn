/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:24:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 20:02:24 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char *s, char c, size_t n)
{
	char	*ret;
	char	*ret2;

	printf("\n\tvoid *s:\t%s\n", s);
	printf("\n\tchar c:\t\t%c\n", c);
	if (s != NULL)
	{
		ret = memchr(s, c, n);
		printf("\n\tmemchr:\t\t%s\n", ret);
	}
	ret2 = ft_memchr(s, c, n);
	printf("\n\tft_memchr:\t%s\n", ret2);
	separator();
}

int	main(int ac, char **av)
{
	start_function("memchr");
	separator();
	if (ac == 2)
	{
		if (!strcmp(av[1], "NULL"))
			test(NULL, 'c', 1);
	}
	else if (ac > 2)
		test(av[1], av[2][0], atoi(av[3]));
	else
	{
		test("skadjnbfdhsshp", 'p', 14);
		test("skpdjnpbfdphsshp", 'p', 16);
		test("skadjnbfdhsshp", 'z', 14);
	}
	end_function();
	return (0);
}
