/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:00:14 by lgomez-g          #+#    #+#             */
/*   Updated: 2023/04/20 15:27:21 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
	{
		dest_len++;
	}
	while (src[src_len] != '\0' && (dest_len + src_len) < size - 1)
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}
	dest[dest_len + src_len] = '\0';
	return (dest_len + src_len);
}

/*
1. Se mide el tamanho de las dos cadenas verificando que den espacio al
caracter nulo que se va a agregar al final.

2. En el segundo ciclo while se empieza a copiar las dos cadenas y con el
size -1 nos aseguramos que no tengan espacio suficiente para'\0'.

3. Agregamos el caracter nulo al final de las 2 cadenas.

4.Devolvemos el tamanho de las dos cadenas.
*/