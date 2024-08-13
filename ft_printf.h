/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:19:54 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/08/13 18:58:32 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

// Declarations from ft_printf.c
int		ft_printf(char const *str, ...);
// Declarations from ft_printf_utils.c
int		ft_putchar(char c);
int		ft_putstr(char *s);
long	ft_putnbr(long n);
#endif
