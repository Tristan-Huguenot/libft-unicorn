/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:24:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 14:48:16 by thugueno         ###   ########.fr       */
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
		ret = strrchr(s, c);
		printf("\n\tstrrchr:\t%s\n", ret);
	}
	ret2 = ft_strrchr(s, c);
	printf("\n\tft_strrchr:\t%s\n", ret2);
	separator();
}

int	main(int ac, char **av)
{
	start_function("strrchr");
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
		test("pskadjnbfdhssh", 'p');
		test("skpdjnpbfdphssph", 'p');
		test("skadjnbfdhsshp", 'z');
	}
	end_function();
	return (0);
}
