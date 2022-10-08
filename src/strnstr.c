/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:24:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 20:16:57 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char *big, char *little, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = big;
	str2 = little;
	if (!strcmp(big, "NULL"))
		str1 = (void *)0;
	if (!strcmp(little, "NULL"))
		str2 = (void *)0;
	printf("\n\tbig:\t%s\n", str1);
	printf("\n\tlittle:\t%s\n", str2);
	printf("\n\tn:\t%lu\n", n);
	if (str1 && str2)
		printf("\n\tstrnstr:\t%s\n", strnstr(str1, str2, n));
	printf("\n\tft_strnstr:\t%s\n", ft_strnstr(str1, str2, n));
	separator();
}

int	main(int ac, char **av)
{
	start_function("strnstr");
	separator();
	if (ac > 3)		
		test(av[1], av[2], atoi(av[3]));
	else
	{
		test("Hello World", "or", 13);
		test("Hello World", "or", 6);
		test("Hello World", "ol", 13);
	}
	end_function();
	return (0);
}
