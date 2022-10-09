/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:58:11 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/09 22:10:02 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(char *s, int fd)
{
	printf("\n\tputendl_fd:\t\n");
	ft_putendl_fd(s, fd);
	separator();
}

int	main(void)
{
	start_function("putendl_fd");
	separator();
	test("", 1);
	test("Hello World !", 1);
	test(NULL, 1);
	end_function();
}
