/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:54:05 by lgomez-g          #+#    #+#             */
/*   Updated: 2023/04/17 18:55:08 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*newstr;
	int	i;

	i = 0;
	if (!str1 && !str2)
		return (NULL);
	newstr = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) +1));
	if (!newstr)
		return (NULL);
	while (*str1)
	{
		newstr[i] = *str1;
			i++;
			str1++;
	}
	while (*str2 != '\0')
	{
		newstr[i] = *str2;
		i++;
		str2++;
	}
	newstr[i] = '\0';
	return (newstr);
}
