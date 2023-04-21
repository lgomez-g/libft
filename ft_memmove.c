/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:04:50 by lgomez-g          #+#    #+#             */
/*   Updated: 2023/04/21 11:58:10 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	dest_len;

	if (!dest || !src)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	dest_len = ft_strlen(dest);
	if (dest > src)
	{
		ft_memmove(dest + len_dest, src, n - dest_len);
	}
	else
	{	
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/*
1. En la linea ft_memmove(dest + len_dest, src, n - dest_len) 
                                               (............)
											     /
												/ 												 /
											/ /
									      Garantiza que no sobreescribamos
										  los datos ya existentes en Dest y
										  que no se solapen.
*/
