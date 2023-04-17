/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:50:39 by lgomez-g          #+#    #+#             */
/*   Updated: 2023/04/17 14:31:50 by lgomez-g         ###   ########.fr       */
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
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
void	*ft_memset(void *str, int c, size_t n);






#endif