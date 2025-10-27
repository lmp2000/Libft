/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:38:55 by lude-jes          #+#    #+#             */
/*   Updated: 2025/10/24 14:06:19 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			i;
	
	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	i = 0;
	if (n == 0)
		return (dest);
	if (dest > src)
	{
		n--;
		while (i <= n)
		{
			destination[n - i] = source[n - i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dest);
}