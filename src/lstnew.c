/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:21:15 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/11 15:15:28 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(void *content, int	value)
{
	t_list	*el;

	el = ft_lstnew(content);
	if (value == 1)
		printf("\n\tcontent:\t%d\n", *(int *)el->content);
	else if (value == 2)
		printf("\n\tcontent:\t%s\n", (char *)el->content);
	printf("\n\tnext:\t%p\n", el->next);
	free(el);
	separator();
}

int	main(void)
{
	char	*str;
	int		*n;

	str = strdup("Hello World !");
	n = malloc(sizeof(*n) * 1);
	*n = 42;
	start_function("lstnew");
	separator();
	test(n, 1);
	test(str, 2);
	free(str);
	free(n);
	end_function();
	return (0);
}
