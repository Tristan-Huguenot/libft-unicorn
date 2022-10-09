/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:16:55 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/10 00:46:23 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char const *s, char const *set)
{
	char	*str;

	printf("\n\tconst *s:\t%s\n", s);
	printf("\n\tset:\t\t%s\n", set);
	str = ft_strtrim(s, set);
	printf("\n\tstrtrim:\t%s\n", str);
	free(str);
	separator();
}

int	main(int ac, char **av)
{
	char	*av1;
	char	*av2;

	start_function("strtrim");
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
		test(" z q Hello z World !", "z q");
		test("Hello z World ! z q", " z q");
		test("z q Hello z World ! z q", " z q");
		test("z q Hello \t World ! z q", NULL);
		test(NULL, "z q");
		test(NULL, NULL);
	}
	end_function();
	return (0);
}
