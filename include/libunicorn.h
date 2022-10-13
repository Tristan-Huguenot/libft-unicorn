/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunicorn.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:30:52 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/13 15:23:08 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBUNICORN
# define LIBUNICORN

# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <bsd/string.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

void	separator(void)
{
	printf("--|\n");
	printf("  |\n");
	printf("--|\n");
}

void	start_function(char *s)
{
	printf("\n\t\t|- %s\n", s);
}

void	end_function(void)
{
	printf("\n\t\t----------|\n");
}

void	show_list(t_list *list)
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

void	delete_content(void *content)
{
	if (!content)
		return ;
	free(content);
}

#endif
