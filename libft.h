/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:50:39 by lgomez-g          #+#    #+#             */
/*   Updated: 2023/04/13 16:19:26 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_strlen(const char *str);
int	ft_isalpha(int x);
int	ft_isdigit(int x);
int	ft_isprint(int x);
int	ft_isascii(int x);
int	ft_isalnum(int x);
int	ft_toupper(int c);
int	ft_tolower(int c);


#endif