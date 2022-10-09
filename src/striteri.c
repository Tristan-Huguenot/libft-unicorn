/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:30:24 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/09 23:05:08 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void upper(unsigned int n, char *s)
{
	(void)n;
	*s = toupper(*s);
}

static void	lower(unsigned int n, char *s)
{
	(void)n;
	*s = tolower(*s);
}

static void	test(char *s, void (*f)(unsigned int, char *s))
{
	printf("\n\tbefore:\t%s\n", s);
	ft_striteri(s, f);
	printf("\n\tafter:\t%s\n", s);
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
		test(NULL, &lower);	
	}
	end_function();
	return (0);
}
