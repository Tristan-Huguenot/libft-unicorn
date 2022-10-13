/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:45:04 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/13 16:41:39 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

void	iter(void *content)
{
	ft_memset(content, '.', ft_strlen((char const *)content));
}

static void	test(void)
{
	t_list	*lst;
	t_list	*tmp;

	lst = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("World")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("!")));
	show_list(lst);
	printf("\n\tlstiter:");
	ft_lstiter(lst, &iter);
	show_list(lst);
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp->content);
		free(tmp);
	}
}

int	main(void)
{
	start_function("lstiter");
	separator();
	test();
	end_function();
	return (0);
}
