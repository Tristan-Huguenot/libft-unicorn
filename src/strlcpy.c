/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:02:37 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/09 08:02:39 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(size_t size)
{
	char	*src = "Hello World !";
	char	*dest;
	size_t	len;

	len = strlen(src);
	dest = calloc(len + 1, sizeof(*src));
	if (!dest)
		return ;
	memset(dest, '.', len);
	printf("\n\tsrc:\t%s\n", src);
	printf("\n\tdest:\t%s\n", dest);
	printf("\n\tsize to cpy:\t%lu\n", size);
	printf("\n\tstrlcpy:\t%lu\n", strlcpy(dest, src, size));
	printf("\n\tdest:\t%s\n", dest);
	memset(dest, '.', len);
	printf("\n\tft_strlcpy:\t%lu\n", ft_strlcpy(dest, src, size));
	printf("\n\tdest:\t%s\n", dest);
	free(dest);
	separator();
}

int	main(int ac, char **av)
{
	start_function("strlcpy");
	separator();
	if (ac > 1)
		test(atoi(av[1]));
	else
	{
		test(14);
		test(5);
		test(21);
	}
	end_function();
	return (0);
}
