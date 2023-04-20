/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciscogomez <franciscogomez@student.42. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:07:11 by lgomez-g          #+#    #+#             */
/*   Updated: 2023/04/20 15:57:39 by franciscogomez   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	if (n < 0)
		sign = -1;
	str = (char *)malloc(sizeof(char) * ft_intlen(n) +1);
	if (!str)
		return (0);
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i] = (n % 10) * sign + '0';
		i++;
		n = n / 10;
	}
	if (sign == -1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

/*

1. Se verifica si hay signo positivo o negativo y al ser negativo se guarda el signo
en la variable sign.
2. Hacemos malloc para guardar espacio al nuevo string.
3. Miramos con un if si el numero es igual a 0 y sino lo es hacemos despues un bucle
while en el que hacemos nuestra operacion para convertir nuestro int en char (Durante la 
conversion de int a char se obtienen los numeros de forma inversa).
Por ejemplo, si queremos convertir el número 1234 en una cadena de caracteres, la conversión 
se hace de la siguiente manera:

1234 % 10 = 123,4 / 123 % 10 = 12,3 y asi hasta que llegue a 0,...

4. Si al principio se guardo sign -1 , lo devolvemos al string y por ultimo terminamos
con '\0'.
5. Despues de todo el proceso invertimos el string con la funcion strrev ya que habia
sido escrito de manera inversa.
*/