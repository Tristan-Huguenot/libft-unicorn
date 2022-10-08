/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:02:37 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 13:09:06 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test_segfault(void)
{
	char	dest[255];

	ft_strlcat(dest, (void *)0, 1);
}

static void	test_null(void)
{
	char	*src = " World !";
	char	*dest;

	dest = (void *)0;
	printf("\n\tsrc:\t%s\n", src);
	printf("\n\tft_strlcat:\t%lu\n", ft_strlcat(dest, src, 0));
	printf("\n\t%p\n", dest);
}

static void	test(size_t size)
{
	char	*src = " World !";
	char	*dest;
	size_t	len;

	len = strlen(src) + 6;
	dest = calloc(len, sizeof(*dest));
	if (!dest)
		return ;
	memcpy(dest, "Hello", 5);
	printf("\n\tsrc:\t%s\n", src);
	printf("\n\tdest:\t%s\n", dest);
	printf("\n\tsize to cpy:\t%lu\n", size);
	printf("\n\tstrlcat:\t%lu\n", strlcat(dest, src, size));
	printf("\n\tdest:\t%s\n", dest);
	bzero(dest, len);
	memcpy(dest, "Hello", 5);
	printf("\n\tft_strlcat:\t%lu\n", ft_strlcat(dest, src, size));
	printf("\n\tdest:\t%s\n", dest);
	separator();
}

int	main(int ac, char **av)
{
	start_function("strlcat");
	separator();
	if (ac > 1)
	{
		if (!strcmp(av[1], "NULL"))
		{
			test_null();
			test_segfault();
		}
		test(atoi(av[1]));
	}
	else
	{
		test(14);
		test(9);
		test(3);
	}
	end_function();
	return (0);
}
