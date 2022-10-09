/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 07:23:22 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/09 07:47:58 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char *str)
{
	char	*str1;
	char	*str2;

	if (str != NULL)
	{
		str1 = strdup(str);
		printf("\n\tstrdup:\t\t%s\n", str1);
	}
	str2 = ft_strdup(str);
	printf("\n\tft_strdup:\t%s\n", str2);
	free(str1);
	free(str2);
	separator();
}

int	main(int ac, char **av)
{
	start_function("strdup");
	separator();
	if (ac > 1)
	{
		if (!strcmp(av[1], "NULL"))
			test(NULL);
		test(av[1]);
	}
	else
	{
		test("Hello World !");
		test("");
	}
	end_function();
	return (0);
}
