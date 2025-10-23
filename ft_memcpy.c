/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:59:48 by lude-jes          #+#    #+#             */
/*   Updated: 2025/10/24 00:27:29 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			i;
	
	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	i = 0;

	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}

	return (dest);
}