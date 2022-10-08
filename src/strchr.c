/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:24:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 14:48:09 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char *s, char c)
{
	char	*ret;
	char	*ret2;

	printf("\n\tchar *s:\t%s\n", s);
	printf("\n\tchar c:\t%c\n", c);
	if (s != NULL)
	{
		ret = strchr(s, c);
		printf("\n\tstrchr:\t\t%s\n", ret);
	}
	ret2 = ft_strchr(s, c);
	printf("\n\tft_strchr:\t%s\n", ret2);
	separator();
}

int	main(int ac, char **av)
{
	start_function("strchr");
	separator();
	if (ac == 2)
	{
		if (!strcmp(av[1], "NULL"))
			test(NULL, 'c');
	}
	else if (ac > 2)
		test(av[1], av[2][0]);
	else
	{
		test("skadjnbfdhsshp", 'p');
		test("skpdjnpbfdphsshp", 'p');
		test("skadjnbfdhsshp", 'z');
	}
	end_function();
	return (0);
}
