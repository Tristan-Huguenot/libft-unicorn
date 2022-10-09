/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:16:55 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/10 01:03:56 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char const *s, char c)
{
	char	**strs;
	size_t	i;

	printf("\n\tconst *s:\t%s\n", s);
	printf("\n\tchar:\t\t%c\n", c);
	strs = ft_split(s, c);
	printf("\n\tsplit:\n");
	i = 0;
	if (strs != NULL)
	{
		while (strs[i])
		{
			printf("\n\t\t\t%s\n", strs[i]);
			free(strs[i]);
			i++;
		}
	}
	free(strs);
	separator();
}

int	main(int ac, char **av)
{
	char	*av1;

	start_function("split");
	separator();
	if (ac > 2)
	{
		if (!strcmp(av[1], "NULL"))
			av1 = (void *)0;
		test(av1, av[2][0]);
	}
	else
	{
		test("Je suis la bonjour", ' ');
		test("   Je suis      la bonjour     ", ' ');
		test("      je          ", ' ');
		test("||||", '|');
		test(NULL, 'o');
	}
	end_function();
	return (0);
}
