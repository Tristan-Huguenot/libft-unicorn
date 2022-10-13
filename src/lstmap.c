/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:45:04 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/13 17:52:02 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	*map(void *content)
{
	(void)content;
	return (ft_strdup("OK"));
}

static void	test(void)
{
	t_list	*lst;
	t_list	*tmp;
	t_list	*new_lst;

	lst = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("World")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("!")));
	printf("\n\tlstmap:");
	new_lst = ft_lstmap(lst, &map, &delete_content);
	show_list(new_lst);
	printf("\n\tinital lst:");
	show_list(lst);
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp->content);
		free(tmp);
	}
	while (new_lst)
	{
		tmp = new_lst;
		new_lst = new_lst->next;
		free(tmp->content);
		free(tmp);
	}
	ft_lstdelone(NULL, NULL);
}

int	main(void)
{
	start_function("lstmap");
	separator();
	test();
	end_function();
	return (0);
}
