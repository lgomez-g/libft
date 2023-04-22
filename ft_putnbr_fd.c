/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 08:43:40 by lgomez-g          #+#    #+#             */
/*   Updated: 2023/04/22 09:50:52 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}
/*
Comments:

ft_putchar_fd(n % 10 + '0', fd); Cada digito en ls representacion decimal de un numero
se puede obtener mediante el operador de modulo %. 
ej : si n es 12345, entonces n % 10 sería 5, ya que 5 es el último dígito de 12345. Y al
sumarlo + '0' obtenemos el valor ASCII.ej: 8 + '0'(48) = (56).

*/