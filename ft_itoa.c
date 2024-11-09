/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:20:30 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/09 16:53:05 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lennbr(n)
{
	size_t	i;
	
	i = 0;
	if (n < 0)
		n = n * -1;
	if (n >= 0)
		i = 1;
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

*/char	*ft_itoa(int n)
{
	char	*res;
	
	res = (char *) malloc(sizeof(char) * (lennbr(n) + 1)); 
}

int	main()
{
	printf("%zu", lennbr(0));
}