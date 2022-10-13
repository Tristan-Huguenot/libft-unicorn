/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdelone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:45:04 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/13 15:24:20 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test(void)
{
	t_list	*lst;
	t_list	*tmp;

	lst = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("World")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("!")));
	show_list(lst);
	printf("\n\tlstdelone:");
	ft_lstdelone(ft_lstlast(lst), &delete_content);
	lst->next->next = NULL;
	show_list(lst);
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp->content);
		free(tmp);
	}
	ft_lstdelone(NULL, NULL);
}

int	main(void)
{
	start_function("lstdelone");
	separator();
	test();
	end_function();
	return (0);
}
