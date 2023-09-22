/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:21:53 by hmorisak          #+#    #+#             */
/*   Updated: 2023/09/22 11:17:39 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PF_H
# define PF_H

# include <libc.h>

size_t	ft_strlen(const char *c);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putnbr(int n, int *len);
void	to_hexa(unsigned long long num, char *str, int *len);
void	print_conv(const char *format, va_list *args, int *len);
void	ft_putnbr_u(unsigned int n, int *len);

#endif
