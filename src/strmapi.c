/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:30:24 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/09 23:04:43 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static char upper(unsigned int n, char c)
{
	(void)n;
	return (toupper(c));
}

static char	lower(unsigned int n, char c)
{
	(void)n;
	return (tolower(c));
}

static void	test(char *s, char (*f)(unsigned int, char c))
{
	char	*str;

	str = ft_strmapi(s, f);
	printf("\n\tconst *s:\t%s\n", s);
	printf("\n\tstrmapi:\t%s\n", str);
	free(str);
	separator();
}

int	main(int ac, char **av)
{
	char	s[] = "Hello World !";

	start_function("striteri");
	separator();
	if (ac > 1)
	{
		test(av[1], &upper);
		test(av[1], &lower);
	}
	else
	{
		test(s, &upper);
		test(s, &lower);
		test(NULL, &upper);
	}
	end_function();
	return (0);
}
