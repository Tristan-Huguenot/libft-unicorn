/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:58:11 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/09 22:07:37 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(int n, int fd)
{
	printf("\n\tputnbr_fd:\t\n");
	ft_putnbr_fd(n, fd);
	printf("\n");
	separator();
}

int	main(void)
{
	start_function("putnbr_fd");
	separator();
	test(42, 1);
	test(INT_MAX, 1);
	test(INT_MIN, 1);
	end_function();
}
