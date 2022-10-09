/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 07:23:22 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/09 07:35:02 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(void)
{
	void	*ptr1;
	void	*ptr2;

	ptr1 = calloc(42, sizeof(char));
	ptr2 = ft_calloc(42, sizeof(char));
	printf("\n\tmemcmp:\t\t%d\n", memcmp(ptr1, ptr2, 42));
	free(ptr1);
	free(ptr2);
	ptr2 = ft_calloc(INT_MAX, INT_MAX);
	printf("\n\toverflow:\t%p\n", ptr2);
	separator();
}

int	main(void)
{
	start_function("calloc");
	separator();
	test();
	end_function();
	return (0);
}
