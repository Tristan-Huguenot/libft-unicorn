/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:58:11 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/09 22:13:34 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char c, int fd)
{
	printf("\n\tputchar_fd:\t\n");
	ft_putchar_fd(c, fd);
	printf("\n");
	separator();
}

int	main(void)
{
	start_function("putchar_fd");
	separator();
	test('4', 1);
	test('g', 1);
	test('\0', 1);
	end_function();
}
