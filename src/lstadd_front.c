/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:09:34 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/11 18:29:45 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	show_list(t_list *list)
{
	size_t	i;

	i = 0;
	while (list)
	{
		printf("\n\t%lu element:\t%s\n", i, (char *)list->content);
		printf("\n\tnext:\t\t%p\n", list->next);
		i++;
		list = list->next;
	}
}

static void	test(t_list **list)
{
	t_list	*new;
	t_list	*more_new;

	new = ft_lstnew("new");
	ft_lstadd_front(list, new);
	show_list(*list);
	more_new = ft_lstnew("more_new");
	ft_lstadd_front(list, more_new);
	separator();
	show_list(*list);
	free(new);
	free(more_new);
	separator();
}

int	main(void)
{
	t_list	**list;
	t_list	*el;

	list = malloc(sizeof(*list));
	el = ft_lstnew("first");
	*list = el;
	start_function("lstadd_front");
	separator();
	test(list);
	free(el);
	free(list);
	end_function();
}
