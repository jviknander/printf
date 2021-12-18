/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:45:45 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/17 21:43:53 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr_base(int n, char base, char type);
int	ft_putunbr_base(unsigned int n, int base, int type);
int	ft_putstr(char *s);
int	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
#endif
