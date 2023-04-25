/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciscogomez <franciscogomez@student.42. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:02:36 by lgomez-g          #+#    #+#             */
/*   Updated: 2023/04/25 15:11:16 by franciscogomez   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	swap;

	i = 0;
	size = ft_strlen(str);
	while (size > i)
	{
		swap = str[i];
		str[i] = str[size];
		str[size] = swap;
		i++;
		size--;
	}
	return (str);
}
