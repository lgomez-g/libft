/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciscogomez <franciscogomez@student.42. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:04:50 by lgomez-g          #+#    #+#             */
/*   Updated: 2023/04/25 14:56:34 by franciscogomez   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (0);
	else if (dest > src)
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	else
	{	
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
