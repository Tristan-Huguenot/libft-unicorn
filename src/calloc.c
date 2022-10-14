/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 07:23:22 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/14 16:12:08 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test_0(void)
{
	void	*ptr;

	ptr = ft_calloc(1, 0);
	free(ptr);
	ptr = ft_calloc(0, 1);
	free(ptr);
}

static void	test(void)
{
	void	*ptr1;
	void	*ptr2;

	ptr1 = calloc(42, sizeof(char));
	ptr2 = ft_calloc(42, sizeof(char));
	printf("\n\tmemcmp:\t\t%d\n", memcmp(ptr1, ptr2, 42));
	free(ptr1);
	free(ptr2);
	ptr2 = ft_calloc(LLONG_MAX, 1);
	printf("\n\toverflow:\t%p\n", ptr2);
	separator();
}

int	main(void)
{
	start_function("calloc");
	separator();
	test();
	test_0();
	end_function();
	return (0);
}
