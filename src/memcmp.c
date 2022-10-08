/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:24:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 20:08:13 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char *s1, char *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = s2;
	if (!strcmp(s1, "NULL"))
		str1 = (void *)0;
	if (!strcmp(s2, "NULL"))
		str2 = (void *)0;
	printf("\n\tchar *s1:\t%s\n", str1);
	printf("\n\tchar *s2:\t%s\n", str2);
	printf("\n\tn:\t\t%lu\n", n);
	if (str1 && str2)
		printf("\n\tmemcmp:\t\t%d\n", memcmp(str1, str2, n));
	printf("\n\tft_memcmp:\t%d\n", ft_memcmp(str1, str2, n));
	separator();
}

int	main(int ac, char **av)
{
			start_function("memcmp");
			separator();
			if (ac > 3)		
				test(av[1], av[2], atoi(av[3]));
			else
			{
				test("Hello World", "Hello World", 13);
				test("Hello World", "Hello Jorld", 6);
				test("Hello World", "Hello Jorld", 8);
			}
			end_function();
			return (0);
}
