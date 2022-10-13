/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:45:04 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/13 14:13:08 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunicorn.h"

static void	test_null(void)
{
	t_list *lst = NULL;

	printf("\n\tnull test:\n");
	printf("\n\tlstlast:\t%p\n", ft_lstlast(lst));
}

static void	test(void)
{
	t_list	*lst;
	t_list	*tmp;

	lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("World"));
	ft_lstadd_back(&lst, ft_lstnew("!"));
	show_list(lst);
	printf("\n\tlstlast:");
	show_list(ft_lstlast(lst));
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
}

int	main(void)
{
	start_function("lstlast");
	separator();
	test();
	test_null();
	end_function();
	return (0);
}
