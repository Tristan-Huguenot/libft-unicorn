/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunicorn.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:30:52 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/08 12:35:41 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBUNICORN
# define LIBUNICORN

# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <bsd/string.h>
# include <stdlib.h>
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

#endif
