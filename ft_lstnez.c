/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnez.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 08:54:48 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/13 09:15:37 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new;
	
	new = malloc(sizeof(t_list));
	if (!new)
		return(NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}