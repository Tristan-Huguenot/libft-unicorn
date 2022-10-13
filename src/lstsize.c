/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:09:34 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/13 01:47:30 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	free_list(t_list **list)
{
	t_list	*tmp;

	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		free(tmp->content);
		free(tmp);
	}
}

static void	test(t_list *list)
{
	printf("\n\tlstsize:\t%d\n", ft_lstsize(list));
	separator();
}

int	main(void)
{
	t_list	*list;
	int		i;

	i = 0;
	list = ft_lstnew(ft_itoa(i));
	while (i < 10)
	{
		i++;
		ft_lstadd_front(&list, ft_lstnew(ft_itoa(i)));
	}
	start_function("lstsize");
	separator();
	test(list);
	printf("%p\n", list->next);
	free_list(&list);
	end_function();
}
